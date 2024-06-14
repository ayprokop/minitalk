/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:06:30 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 12:03:56 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int n)
{
	char	*str;
	int		count;

	str = ft_hextoa(n);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
