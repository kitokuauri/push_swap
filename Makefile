# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 14:08:35 by aursuare          #+#    #+#              #
#    Updated: 2025/01/09 14:08:36 by aursuare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = main.c \
				cost.c				\
				moves.c				\
				position.c			\
				push.c				\
				reverse_rotate.c	\
				rotate.c			\
				sort.c				\
				sort_three.c		\
				split.c				\
				stack.c				\
				start.c				\
				swap.c				\
				utils.c

OBJ = ${SRC:.c=.o}
INCLUDE = ./push_swap.h

%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ} ${INCLUDE}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
		${RM} ${OBJ}

fclean:
		clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re