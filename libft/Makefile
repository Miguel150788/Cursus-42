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
			ft_isprint.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_memset.c\
			ft_bzero.c


MY_OBJECTS = $(MY_SOURCES:.c=.o)


 $(NAME): 
		gcc $(CCFLAGS) -c $(MY_SOURCES) -I ./
		ar rc $(NAME) $(MY_OBJECTS)
all : $(NAME)

CCFLAGS += -Wall -Werror -Wextra
clean: 
		rm -f $(MY_OBJECTS)
fclean: clean 
		rm -f $(NAME)

re : fclean all 
