/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:39:32 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 12:52:21 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getarg(va_list *ap, const char type)
{
	int	count;

	count = 0;
	if (type == '%')
		count += ft_printf_char('%');
	else if (type == 'c')
		count += ft_printf_char(va_arg(*ap, int));
	else if (type == 's')
		count += ft_printf_str(va_arg(*ap, char *));
	else if (type == 'd' || type == 'i')
		count += ft_printf_deci(va_arg(*ap, int));
	else if (type == 'u')
		count += ft_printf_unsigned(va_arg(*ap, unsigned int));
	else if (type == 'x')
		count += ft_printf_hex(va_arg(*ap, unsigned int));
	else if (type == 'X')
		count += ft_printf_hexcapital(va_arg(*ap, unsigned int));
	else if (type == 'p')
		count += ft_printf_addr(va_arg(*ap, unsigned long));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_getarg(&ap, format[i]);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	printf("\001\002\007\v\010\f\r\n"):
// 	return (0);
// }