# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 11:40:39 by asohrabi          #+#    #+#              #
#    Updated: 2023/07/17 19:12:25 by asohrabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FUNC = srcs/ft_putchar.c \
	   		srcs/ft_cal.c \
			srcs/ft_strncpy.c \
			srcs/ft_strdup.c \
			srcs/ft_atoi_error.c \
			srcs/ft_putstr.c \
			srcs/ft_atoi_new.c \
			srcs/ft_strlen.c \
			srcs/ft_dict.c \
			srcs/ft_nbr.c \
			srcs/ft_count_lines.c \
			srcs/ft_strchr.c \
			srcs/ft_extract_dict.c \
			srcs/main.c

INC = includes

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
