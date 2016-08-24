# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlepron <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 18:46:14 by vlepron           #+#    #+#              #
#    Updated: 2016/08/17 18:48:30 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRC = main.c ft_operand.c ft_putchar.c

OBJ = main.o \
	  ft_operand.o \
	  ft_putchar.o

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	rm -f $(NAME)
