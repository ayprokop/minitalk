# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:22:34 by ayprokop          #+#    #+#              #
#    Updated: 2024/06/12 18:18:40 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = server
NAMEC = client
CC = cc
CFLAGS = -Wall -Werror -Wextra
FLAGS = $(CFLAGS)  -L ./ft_printf -lftprintf
# -I ./ft_printf/ft_printf.h
all: $(NAMES) $(NAMEC)
	
$(NAMES): server.o
	make -s -C ft_printf
	$(CC) -o server server.o $(FLAGS)
server.o: server.c
	$(CC) -c server.c $(CFLAGS)

$(NAMEC): client.o
	make -s -C ft_printf
	$(CC) $(FLAGS) -o client client.o
client.o: client.c
	$(CC) $(CFLAGS) -c client.c

clean:
	make clean -s -C ft_printf
	rm -f server.o client.o
fclean:
	make fclean -s -C ft_printf
	rm -f server client 

re: fclean all

.PHONY:		all bonus clean fclean re