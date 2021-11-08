# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/26 14:58:42 by wjasmine          #+#    #+#             #
#   Updated: 2021/11/05 17:31:27 by wjasmine         ###   ########.fr       #
# ************************************************************************** #

SRCS	=	ft_isalnum.c ft_toupper.c ft_substr.c \
			ft_isalpha.c ft_tolower.c ft_strjoin.c \
			ft_isascii.c ft_strchr.c ft_strtrim.c \
			ft_isdigit.c ft_strrchr.c ft_split.c \
			ft_isprint.c ft_strncmp.c ft_itoa.c \
			ft_memcpy.c ft_memchr.c ft_striteri.c \
			ft_memmove.c ft_memcmp.c ft_strmapi.c \
			ft_memset.c ft_strnstr.c ft_putchar_fd.c \
			ft_strlen.c ft_atoi.c ft_putstr_fd.c \
			ft_bzero.c ft_calloc.c ft_putendl_fd.c \
			ft_strlcpy.c ft_strdup.c ft_putnbr_fd.c \
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
