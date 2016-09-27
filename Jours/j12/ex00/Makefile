#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efichot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 11:31:22 by efichot           #+#    #+#              #
#    Updated: 2016/09/14 12:52:04 by efichot          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
SOURCES = main.c print.c
OBJECTS = main.o print.o
FALGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES)
	gcc $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all