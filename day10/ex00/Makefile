# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 15:46:50 by lmarie            #+#    #+#              #
#    Updated: 2020/02/10 15:46:53 by lmarie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c


all: $(NAME)

$(NAME): 
	gcc -Wall -Werror -Wextra -c $(SRCS) -I includes/
	ar rc $(NAME) *.o
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f libft.a
re: fclean all
