# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 18:31:38 by asohrabi          #+#    #+#              #
#    Updated: 2023/07/20 18:36:24 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FUNC = srcs/ft_putstr.c \
	   		srcs/ft_putnbr.c \
			srcs/ft_ops.c \
			srcs/ft_atoi.c \
			srcs/main.c 

INC = srcs/ft_headers.h

OBJ = ${FUNC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@ -I${INC}

all: ${NAME}

${NAME}: ${OBJ}
	gcc ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re %.o
