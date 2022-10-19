# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 11:25:19 by mbueno-m          #+#    #+#              #
#    Updated: 2022/09/26 11:25:21 by mbueno-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

MY_SOURCES = ft_toupper.c\
			ft_atoi.c\
			ft_tolower.c\
			ft_strlen.c\
			ft_isascii.c\
			ft_isalnum.c\
			ft_isprint.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_memset.c\
			ft_bzero.c\
			ft_strchr.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_striteri.c\
			ft_strmapi.c\
			ft_split.c\



MY_SOURCES_B =	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\






OBJS = $(MY_SOURCES:.c=.o)
OBJS_B = $(MY_SOURCES_B:.c=.o)

CCFLAGS += -Wall -Werror -Wextra
CC		= cc
.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			ar rc  ${NAME} ${OBJS}
			ranlib ${NAME}
bonus:		${OBJS} ${OBJS_B}
			ar rc ${NAME} ${OBJS} ${OBJS_B}
			ranlib ${NAME}

all : $(NAME)

clean: 
		rm -f $(OBJS) $(OBJS_B)

fclean: clean 
		rm -f $(NAME)

re : fclean all 

.PHONY:		all clean fclean re libft.a bonus
