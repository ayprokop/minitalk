/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit_hexcap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:19:54 by ayprokop          #+#    #+#             */
/*   Updated: 2023/03/29 16:09:28 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdigit_hexcap(unsigned int number, unsigned int base, int *count)
{
	char	*hexcap;

	hexcap = "0123456789ABCDEF";
	if (number < 0)
	{
		number *= -1;
		*count += write(1, "-", 1);
	}
	if (number >= base)
		ft_putdigit_hexcap((number / base), base, count);
	*count += write(1, &hexcap[number % base], 1);
}
