/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:25:38 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/09/26 11:25:40 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>

int			ft_toupper(int c);
int			ft_atoi(const char *str);
int			ft_tolower(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
void		*ft_memset(void *b, int c, size_t num);
void		ft_bzero(void *s, size_t n);

#endif 
