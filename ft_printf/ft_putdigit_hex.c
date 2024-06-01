/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:19:54 by ayprokop          #+#    #+#             */
/*   Updated: 2023/03/29 14:48:23 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdigit_hex(unsigned int number, unsigned int base, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number < 0)
	{
		number *= -1;
		*count += write(1, "-", 1);
	}
	if (number >= base)
		ft_putdigit_hex((number / base), base, count);
	*count += write(1, &hex[number % base], 1);
}
