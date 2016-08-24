# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlepron <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/19 14:35:01 by vlepron           #+#    #+#              #
#    Updated: 2016/08/19 14:36:04 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

OBJ = ft_cat.o

all: $(NAME)

$(NAME):
		gcc -c $(SRC)
			gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)
clean:
			rm -f $(OBJ)

fclean: clean
			rm  -f $(NAME)

re: fclean all
