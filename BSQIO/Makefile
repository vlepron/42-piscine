# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apetitje <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 15:46:55 by apetitje          #+#    #+#              #
#    Updated: 2016/08/25 15:51:16 by vlepron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = bsq_main.c input_func.c str_func.c print_func.c algo.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -O3

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
