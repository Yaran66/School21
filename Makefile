# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/26 14:58:42 by wjasmine          #+#    #+#             #
#   Updated: 202#   Updated: 2021/10/30 17:22:47 by wjasmine         ###   ########.fr       #                                                              #
# ************************************************************************** #

SRCS	=	ft_isalnum.c ft_toupper.c \
			ft_isalpha.c ft_tolower.c \
			ft_isascii.c ft_strchr.c \
			ft_isdigit.c ft_strrchr.c \
			ft_isprint.c ft_strncmp.c \
			ft_memcpy.c ft_memchr.c \
			ft_memmove.c ft_memcmp.c \
			ft_memset.c \
			ft_strlen.c \
			ft_bzero.c \
			ft_strlcpy.c \
			ft_strlcat.c

SRCS_B	=

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

NAME = libft.a

GCC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror
OPTFLAGS = -O2

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} $?

%.o	:	%.c libft.h
		${GCC}	${CFLAGS}	${OPTFLAGS} -c $< -o ${<:.c=.o}


bonus:
		@make OBJ="$(OBJS_B)" all

clean:		
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
