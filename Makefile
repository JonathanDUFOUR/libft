# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 11:52:33 by jojo              #+#    #+#              #
#    Updated: 2020/04/05 07:15:50 by jdufour          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi_base.c			\
				ft_atoi.c				\
				ft_atol.c				\
				ft_bzero.c				\
				ft_cat.c				\
				ft_convert_base.c		\
				ft_cut_spaces.c			\
				ft_file_size.c			\
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
				ft_lstadd.c				\
				ft_lstdel.c				\
				ft_lstdelone.c			\
				ft_lstiter.c			\
				ft_lstmap.c				\
				ft_lstnew.c				\
				ft_memalloc.c			\
				ft_memccpy.c			\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memdel.c				\
				ft_memmove.c			\
				ft_memset.c				\
				ft_padded_putnbr_base.c	\
				ft_power.c				\
				ft_print_bits.c			\
				ft_putchar.c			\
				ft_putchar_fd.c			\
				ft_putendl.c			\
				ft_putendl_fd.c			\
				ft_putnbr_base.c		\
				ft_putnbr.c				\
				ft_putnbr_fd.c			\
				ft_putstr.c				\
				ft_putstr_fd.c			\
				ft_reverse_all_bytes.c	\
				ft_reverse_byte.c		\
				ft_reverse_each_byte.c	\
				ft_set_bit.c			\
				ft_sqrt.c				\
				ft_strcasecmp.c			\
				ft_strcaseequ.c			\
				ft_strcat.c				\
				ft_strchr.c				\
				ft_strclr.c				\
				ft_strcmp.c				\
				ft_strcpy.c				\
				ft_strdel.c				\
				ft_strdup.c				\
				ft_strequ.c				\
				ft_striter.c			\
				ft_striteri.c			\
				ft_strjoin.c			\
				ft_strlcat.c			\
				ft_strlen.c				\
				ft_strmap.c				\
				ft_strmapi.c			\
				ft_strncasecmp.c		\
				ft_strncaseequ.c		\
				ft_strncat.c			\
				ft_strncmp.c			\
				ft_strncpy.c			\
				ft_strndup.c			\
				ft_strnequ.c			\
				ft_strnew.c				\
				ft_strnstr.c			\
				ft_strrchr.c			\
				ft_strrev.c				\
				ft_strsplit.c			\
				ft_strstr.c				\
				ft_strsub.c				\
				ft_strtrim.c			\
				ft_substrs_count.c		\
				ft_swap.c				\
				ft_swap_bits.c			\
				ft_toggle_bit.c			\
				ft_toggle_byte.c		\
				ft_toggle_nbyte.c		\
				ft_tolower.c			\
				ft_toupper.c			\
				ft_ultimate_tolower.c	\
				ft_ultimate_toupper.c	\
				ft_unset_bit.c			\
				ft_wrong_base.c

OBJECTS		:=	${SRCS:.c=.o}

CFLAGS		=	-Wall -Wextra -Werror

ifeq (${DEBUG}, TRUE)
	CFLAGS	+= -g
	MKFLAGS	+= DEBUG=TRUE
endif

CC			=	gcc

AR_RC		=	ar rcs

RM			=	rm -rf


${NAME}:	${OBJECTS}
	${AR_RC} $@ $^

all:	${NAME}

%.o:	%.c
	${CC} -c ${CFLAGS} -o $@ $<

clean:
	@${RM} ${OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
