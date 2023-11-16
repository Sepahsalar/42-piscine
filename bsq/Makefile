NAME = bsq

FUNC = srcs/ft_putchar.c \
	   		srcs/core_sequel.c \
			srcs/core.c \
			srcs/ft_strndup.c \
			srcs/ft_atoi.c \
			srcs/ft_putstr.c \
			srcs/ft_map.c \
			srcs/ft_strlen.c \
			srcs/ft_memcpy.c \
			srcs/ft_read_map.c \
			srcs/ft_strncpy.c \
			srcs/ft_strchr.c \
			srcs/ft_strnlen.c \
			srcs/main.c 

INC = srcs/bsq_header.h

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

