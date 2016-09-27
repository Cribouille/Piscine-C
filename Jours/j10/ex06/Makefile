#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efichot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 18:47:55 by efichot           #+#    #+#              #
#    Updated: 2016/09/12 22:31:18 by efichot          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op
FLAGS = -Wall -Wextra -Werror
SOURCES = ./srcs/ft_atoi.c ./srcs/op.c ./srcs/ft_putchar.c ./srcs/ft_putstr.c\
./srcs/ft_putnbr.c ./srcs/main.c
OBJECTS = ./ft_atoi.o ./op.o ./ft_putchar.o ./ft_putstr.o ./ft_putnbr.o\
./main.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES)
	gcc $(FLAGS) $(OBJECTS) -I./includes -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all