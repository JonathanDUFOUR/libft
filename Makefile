# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 11:52:33 by jojo              #+#    #+#              #
#    Updated: 2020/03/15 15:27:10 by jojo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME	=	mylib.a

HEADER_NAME	=	mylib.h

SRC			=	./*.c

OBJECTS		=	./*.o

CC			=	gcc

CFLAGS		=	-Wextra -Werror -Wall

AR_RC		=	ar rc

RM			=	rm -f


all: header object
	${AR_RC} ${LIB_NAME} ${OBJECTS}

header:
	touch ${HEADER_NAME} && ls ${SRC} > ${HEADER_NAME} && sed -i "s/\.\///g" ${HEADER_NAME} && sed -i "s/\.c/()/g" ${HEADER_NAME}

object:
	${CC} -c ${CFLAGS} ${SRC}

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${LIB_NAME} ${HEADER_NAME}

re: fclean all
