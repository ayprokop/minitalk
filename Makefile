# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:22:34 by ayprokop          #+#    #+#              #
#    Updated: 2024/06/05 10:50:29 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:22:34 by ayprokop          #+#    #+#              #
#    Updated: 2024/06/01 21:02:22 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:22:34 by ayprokop          #+#    #+#              #
#    Updated: 2024/06/01 21:02:22 by ayprokop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = server
NAMEC = client
CC = cc
CFLAGS = -Wall -Werror -Wextra
FLAGS = $(CFLAGS) -I./ft_printf/ft_printf.h -Lft_printf -lftprintf

all: $(NAMES) $(NAMEC)
	
$(NAMES): server.o
	make -s -C ft_printf
	$(CC)  -o server server.o $(FLAGS)
server.o: server.c
	$(CC) $(CFLAGS) -c server.c

$(NAMEC): client.o
	make -s -C ft_printf
	$(CC)  -o client client.o $(FLAGS)
client.o: client.c
	$(CC) $(CFLAGS) -c client.c

clean:
	make clean -s -C ft_printf

fclean:
	make fclean -s -C ft_printf
	rm -f server client server.o client.o

re: fclean all

.PHONY:		all bonus clean fclean re