/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:41:33 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 16:18:11 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <signal.h>
// # include "libft.h"

int		ft_printf_char(char c);
int		ft_printf_str(char *str);
int		ft_printf_deci(int n);
int		ft_printf_unsigned(unsigned int n);
char	*ft_utoa(unsigned int n);
int		ft_printf_hex(unsigned int n);
char	*ft_hextoa(unsigned int n);
int		ft_printf_hexcapital(unsigned int n);

int		ft_printf_addr(unsigned long n);
char	*ft_addrtoa(unsigned long n);

int		ft_getarg(va_list *ap, const char type);
int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
#endif