# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlepron <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 14:53:48 by vlepron           #+#    #+#              #
#    Updated: 2016/08/17 18:45:32 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

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
