/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:19:54 by ayprokop          #+#    #+#             */
/*   Updated: 2023/03/30 12:03:51 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdigit(long long number, long base, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number < 0)
	{
		number *= -1;
		*count += write(1, "-", 1);
	}
	if (number >= base)
		ft_putdigit((number / base), base, count);
	*count += write(1, &hex[number % base], 1);
}
