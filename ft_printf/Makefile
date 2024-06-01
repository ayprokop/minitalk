# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 16:04:47 by ayprokop          #+#    #+#              #
#    Updated: 2023/09/15 12:47:40 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_putaddr.c ft_putchar.c ft_putdigit_hexcap.c \
		ft_putdigit.c ft_putstr.c ft_putdigit_hex.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB = ar rcs
RM = rm -f

all: $(NAME)
$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
