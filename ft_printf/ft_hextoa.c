/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:36:02 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 12:01:28 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nlen(unsigned int num)
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
		num /= 16;
		nlen++;
	}
	return (nlen);
}

char	*ft_hextoa(unsigned int n)
{
	char			*nbr;
	unsigned long	num;
	int				len_nbr;
	char			*base;

	base = "0123456789abcdef";
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
		nbr[len_nbr--] = base[num % 16];
		num /= 16;
	}
	return (nbr);
}

// int	main(void)
// {
// 	// ft_hextoa(2147483647);
// 	printf("%s\n", ft_hextoa(-0x432));
// 	printf("%x\n", -0x432);
// 	return (0);
// }