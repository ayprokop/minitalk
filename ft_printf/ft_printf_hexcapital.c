/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexcapital.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:01:10 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 16:24:51 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_printf_hexcapital(unsigned int n)
{
	char	*str;
	int		count;
	int		i;

	str = ft_hextoa(n);
	i = 0;
	while (str[i])
	{
		str[i] = (char)ft_toupper(str[i]);
		i++;
	}
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}
