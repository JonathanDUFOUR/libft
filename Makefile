# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 11:52:33 by jojo              #+#    #+#              #
#    Updated: 2020/03/16 21:30:54 by jonathan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi_base.c		\
				ft_file_size.c		\
				ft_isspace.c		\
				ft_putchar.c		\
				ft_sqrt.c			\
				ft_strlen.c			\
				ft_atoi.c			\
				ft_int_size.c		\
				ft_itoa_base.c		\
				ft_putnbr_base.c	\
				ft_strcat.c			\
				ft_strstr.c			\
				ft_base_digit.c		\
				ft_isdigit.c		\
				ft_itoa.c			\
				ft_putnbr.c			\
				ft_strcpy.c			\
				ft_wrong_base.c		\
				ft_cat.c			\
				ft_is_in_base.c		\
				ft_power.c			\
				ft_putstr.c			\
				ft_strdup.c

OBJECTS		=	${SRCS:.c=.o}

CFLAGS		=	-Wall -Wextra -Werror

CC			=	gcc

AR_RC		=	ar rcs

RM			=	rm -rf


all:	${NAME}

debug:	CFLAGS += -g
debug:	${NAME}

%.o:	%.c
	${CC} -c ${CFLAGS} -o $@ $<

${NAME}:	${OBJECTS}
	${AR_RC} $@ $^

clean:
	@${RM} ${OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
