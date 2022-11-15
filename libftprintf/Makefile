# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 09:27:07 by mbueno-m          #+#    #+#              #
#    Updated: 2022/10/20 09:27:10 by mbueno-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra
CC		= gcc
AR 		= ar crs
RM 		= rm -f

OBJS = $(MY_SOURCES:.c=.o)

MY_SOURCES = ft_printf.c \
			ft_comper.c\
			ft_intsin.c\
			ft_printhexade.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_putchar.c\
			ft_printhexade.c\
			ft_printmemptr.c\


all : $(NAME)


${NAME}:	${OBJS}
			${AR}  ${NAME} ${OBJS}

clean: 
		${RM} $(OBJS) 

fclean: clean 
		 ${RM} $(NAME)

re : fclean all 

.PHONY:		all clean fclean re bonus
