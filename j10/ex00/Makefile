# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlepron <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 15:41:55 by vlepron           #+#    #+#              #
#    Updated: 2016/08/17 19:19:24 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I ./includes
	ar r $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm  -f $(NAME)

re: fclean all
