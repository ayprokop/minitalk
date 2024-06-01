/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:28:25 by ayprokop          #+#    #+#             */
/*   Updated: 2023/03/29 14:14:38 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %p The void * pointer argument has to be printed in hexadecimal format.
// "0x" is a prefix and means that the following numbers are in hexadecimal.
// e.g., "x = 0xf;" sets "x" to the decimal value 15 (= the binary value 1111)
// the return value of "write()" is th number of bytes written.
void	ft_putdigit_ptr(unsigned long number, unsigned long base, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number < 0)
	{
		number *= -1;
		*count += write(1, "-", 1);
	}
	if (number >= base)
		ft_putdigit_ptr((number / base), base, count);
	*count += write(1, &hex[number % base], 1);
}

int	ft_putaddr(unsigned long ptr)
{
	int	c_count;

	c_count = 0;
	c_count += write(1, "0x", 2);
	ft_putdigit_ptr(ptr, 16, &c_count);
	return (c_count);
}
