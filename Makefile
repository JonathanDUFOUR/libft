# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 11:52:33 by jojo              #+#    #+#              #
#    Updated: 2020/03/20 00:51:18 by jojo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi_base.c		\
				ft_atoi.c			\
				ft_cat.c			\
				ft_convert_base.c	\
				ft_file_size.c		\
				ft_indexof.c		\
				ft_int_size.c		\
				ft_isdigit.c		\
				ft_isspace.c		\
				ft_itoa_base.c		\
				ft_itoa.c			\
				ft_power.c			\
				ft_putchar.c		\
				ft_putnbr_base.c	\
				ft_putnbr.c			\
				ft_putstr.c			\
				ft_sqrt.c			\
				ft_strcat.c			\
				ft_strcmp.c			\
				ft_strcpy.c			\
				ft_strdup.c			\
				ft_strlen.c			\
				ft_strstr.c			\
				ft_wrong_base.c

OBJECTS		=	${SRCS:.c=.o}

CFLAGS		=	-Wall -Wextra -Werror

CC			=	gcc

AR_RC		=	ar rcs

RM			=	rm -rf


${NAME}:	${OBJECTS}
	${AR_RC} $@ $^

all:	${NAME}

debug:	CFLAGS += -g
debug:	${NAME}

%.o:	%.c
	${CC} -c ${CFLAGS} -o $@ $<

clean:
	@${RM} ${OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
