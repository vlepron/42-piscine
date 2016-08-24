# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlepron <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/19 14:35:01 by vlepron           #+#    #+#              #
#    Updated: 2016/08/22 11:34:39 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c ft_use.c

OBJ = ft_tail.o ft_use.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)

fclean: clean
	rm  -f $(NAME)

re: fclean all
