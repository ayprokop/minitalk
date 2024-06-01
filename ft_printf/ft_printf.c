/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:22:17 by ayprokop          #+#    #+#             */
/*   Updated: 2023/03/29 15:54:14 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// printf() 
// - argument processing 1) format strings 2) arguments("xxx") 3) error
// - format conversion
// - returns the character counts
// "const char*" is a mutable pointer to an immutable
// character/string. You cannot change the contents
// of the location(s) this pointer points to.

#include "ft_printf.h"

char	fmt_specifier(char fmt)
{
	char	*specifier;

	specifier = "cspdiuxX%";
	while (*specifier)
	{
		if (fmt == *specifier)
			return (*specifier);
		specifier++;
	}
	return (0);
}

int	fmt_conversion(va_list ap, char specifier)
{
	int	count;

	count = 0;
	if (specifier == '%')
		count += ft_putchar('%');
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	if (specifier == 'p')
		count += ft_putaddr(va_arg(ap, unsigned long));
	if (specifier == 'd' || specifier == 'i')
		ft_putdigit((long long)va_arg(ap, int), 10, &count);
	if (specifier == 'x')
		ft_putdigit_hex((unsigned long)va_arg(ap, int), 16, &count);
	if (specifier == 'X')
		ft_putdigit_hexcap((unsigned int)va_arg(ap, int), 16, &count);
	if (specifier == 'u')
		ft_putdigit_hex((unsigned long)va_arg(ap, int), 10, &count);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt != '%')
			count += write(1, fmt, 1);
		else if (*fmt == '%' && fmt_specifier(*(fmt + 1)))
			count += fmt_conversion(ap, *(fmt++ + 1));
		else if (*fmt == '%' && !fmt_specifier(*(fmt + 1)))
			break ;
		fmt++;
	}
	va_end(ap);
	return (count);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", printf(" %d ", -2147483648));
	printf("%d\n", ft_printf(" %d ", -2147483648));
} */