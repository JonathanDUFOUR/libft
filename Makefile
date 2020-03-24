# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 11:52:33 by jojo              #+#    #+#              #
#    Updated: 2020/03/24 04:56:08 by jdufour          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi_base.c			\
				ft_atoi.c				\
				ft_bzero.c				\
				ft_cat.c				\
				ft_convert_base.c		\
				ft_file_size.c			\
				ft_fill_sub_len_tab.c	\
				ft_fill_sub_tab.c		\
				ft_indexof.c			\
				ft_int_size.c			\
				ft_isalnum.c			\
				ft_isalpha.c			\
				ft_isascii.c			\
				ft_ischarset.c			\
				ft_isdigit.c			\
				ft_islower.c			\
				ft_isprint.c			\
				ft_isspace.c			\
				ft_isupper.c			\
				ft_itoa_base.c			\
				ft_itoa.c				\
				ft_memalloc.c			\
				ft_memccpy.c			\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memdel.c				\
				ft_memmove.c			\
				ft_memset.c				\
				ft_power.c				\
				ft_putchar.c			\
				ft_putnbr_base.c		\
				ft_putnbr.c				\
				ft_putstr.c				\
				ft_sqrt.c				\
				ft_strcat.c				\
				ft_strchr.c				\
				ft_strcmp.c				\
				ft_strcpy.c				\
				ft_strdup.c				\
				ft_strlcat.c			\
				ft_strlen.c				\
				ft_strncat.c			\
				ft_strncmp.c			\
				ft_strncpy.c			\
				ft_strnstr.c			\
				ft_strrchr.c			\
				ft_strsplit.c			\
				ft_strstr.c				\
				ft_substrs_count.c		\
				ft_swap.c				\
				ft_tolower.c			\
				ft_toupper.c			\
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
