# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:22:34 by ayprokop          #+#    #+#              #
#    Updated: 2024/06/01 18:26:17 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
FLAGS = $(CFLAGS) -I ./ft_printf/ft_printf.h -L ./ft_printf -lftprintf

all: server client
	
server: server.o
	make -s -C ft_printf
	$(CC) $(FLAGS) -o server server.o
server.o: server.c
	$(CC) $(CFLAGS) -c server.c

client: client.o
	make -s -C ft_printf
	$(CC) $(FLAGS) -o client client.o
client.o: client.c
	$(CC) $(CFLAGS) -c client.c

clean:
	make clean -s -C ft_printf

fclean:
	make fclean -s -C ft_printf
	rm -f server client server.o client.o

re: fclean all

.PHONY:		all bonus clean fclean re