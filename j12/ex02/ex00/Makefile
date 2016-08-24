# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlepron <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/19 14:29:52 by vlepron           #+#    #+#              #
#    Updated: 2016/08/19 14:32:40 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display.c

OBJ = ft_display.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)
clean:
		rm -f $(OBJ)

fclean: clean
		rm  -f $(NAME)

re: fclean all
