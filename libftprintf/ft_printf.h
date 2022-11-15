/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:00:07 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/27 11:00:09 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stddef.h>
# include<stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_comper(va_list args, char *str, size_t *count);
void	ft_intsin(unsigned int n, size_t *i);
void	ft_printhexade(unsigned int nb, size_t *count, char x);
void	ft_putnbr(int nb, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_putchar(char c, size_t *count);
void	ft_printmemptr(unsigned long arg, size_t *count);

#endif 
