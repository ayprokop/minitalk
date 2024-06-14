/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:06:30 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 12:47:12 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_addr(unsigned long n)
{
	char	*str;
	int		count;

	str = ft_addrtoa(n);
	count = ft_strlen(str);
	if (n == 0)
	{
		ft_putstr_fd("0x0", 1);
		free(str);
		return (3);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		count += 2;
	}
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
