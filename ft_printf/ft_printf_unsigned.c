/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:55:10 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 08:51:30 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int n)
{
	char	*str;
	int		count;

	str = ft_utoa(n);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
