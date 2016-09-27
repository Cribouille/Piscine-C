#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efichot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/18 19:52:05 by efichot           #+#    #+#              #
#    Updated: 2016/09/18 20:02:26 by efichot          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = colle-2

SOURCES = main.c ft_put.c rush00colles.c ft_compare_colle.c generate_colles.c

OBJECTS = main.o ft_put.o rush00colles.o ft_compare_colle.o generate_colles.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES)
	gcc $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all