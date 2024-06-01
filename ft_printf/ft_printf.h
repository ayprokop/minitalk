/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:17:13 by ayprokop          #+#    #+#             */
/*   Updated: 2023/03/30 12:03:54 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *fmt, ...);
int		fmt_conversion(va_list ap, const char fmt);
char	fmt_specifier(char fmt);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putaddr(unsigned long ptr);
void	ft_putdigit(long long number, long base, int *count);
void	ft_putdigit_hexcap(unsigned int number, unsigned int base, int *count);
void	ft_putdigit_hex(unsigned int number, unsigned int base, int *count);
void	ft_putdigit_ptr(unsigned long number, unsigned long base, int *count);

#endif