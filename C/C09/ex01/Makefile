# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 16:28:12 by viceda-s          #+#    #+#              #
#    Updated: 2025/05/19 17:22:01 by viceda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a
SRC_DIR		=	./srcs/
HEAD_DIR	=	./includes/
SRCS		=	${SRC_DIR}ft_putchar.c \
				${SRC_DIR}ft_swap.c \
				${SRC_DIR}ft_putstr.c \
				${SRC_DIR}ft_strlen.c \
				${SRC_DIR}ft_strcmp.c
HEAD		=	${HEAD_DIR}ft.h
OBJS		=	${SRCS:.c=.o}

CC			=	gcc
AR			=	ar
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -I${HEAD_DIR} -c $< -o $@
${NAME}: ${OBJS}
	${AR} -rc ${NAME} ${OBJS}
all: ${NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re