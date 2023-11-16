# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 15:34:39 by asohrabi          #+#    #+#              #
#    Updated: 2023/07/20 10:15:06 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNC = srcs/ft_putchar.c \
			srcs/ft_swap.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c

INC = includes

OBJ = ${FUNC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@ -I${INC}

all: ${NAME}

${NAME}: ${OBJ}	
	ar -crs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
