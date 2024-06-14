/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:36:02 by ayprokop          #+#    #+#             */
/*   Updated: 2024/01/27 08:48:23 by ayprokop         ###   ########.fr       */
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

char	*ft_utoa(unsigned int n)
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
	while (num != 0)
	{
		nbr[len_nbr--] = '0' + (num % 10);
		num /= 10;
	}
	return (nbr);
}

// int	main(void)
// {
// 	// ft_utoa(2147483647);
// 	printf("%s\n", ft_utoa(-1));
// 	return (0);
// }