/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_deci.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:52:14 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/26 17:03:57 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_deci(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
