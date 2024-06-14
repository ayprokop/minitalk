/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_src.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:15:12 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 16:24:43 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nlen(long long num)
{
	int	nlen;

	nlen = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		num *= -1;
		nlen++;
	}
	while (num > 0)
	{
		num /= 10;
		nlen++;
	}
	return (nlen);
}

char	*ft_itoa(int n)
{
	char		*nbr;
	long long	num;
	int			len_nbr;

	num = n;
	len_nbr = ft_nlen(num);
	nbr = (char *)malloc(sizeof(*nbr) * (len_nbr + 1));
	if (!nbr)
		return (NULL);
	nbr[len_nbr--] = '\0';
	if (num == 0)
	{
		nbr[0] = '0';
	}
	else if (num < 0)
	{
		num *= -1;
		nbr[0] = '-';
	}
	while (num > 0)
	{
		nbr[len_nbr--] = '0' + (num % 10);
		num /= 10;
	}
	return (nbr);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
