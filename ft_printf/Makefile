# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 15:18:48 by ayprokop          #+#    #+#              #
#    Updated: 2024/03/14 16:57:32 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#マクロ定義

NAME = libftprintf.a

CC = cc

CFLAGS = -Werror -Wextra -Wall

RM = rm -f

SRC = ft_printf_char.c ft_printf_str.c ft_printf_deci.c ft_printf_unsigned.c \
		ft_printf_hex.c ft_printf.c ft_utoa.c ft_hextoa.c \
		ft_printf_hexcapital.c ft_printf_addr.c ft_addrtoa.c \
		libft_src.c \

OBJS = $(SRC:.c=.o)

#生成規則

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all

.PHONY : all clean fclean re
