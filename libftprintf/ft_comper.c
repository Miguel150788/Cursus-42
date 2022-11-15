/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:55:08 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/11/15 09:55:12 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_comper(va_list args, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (*str == '%')
		ft_putchar(*str, count);
	else if ((*str == 'd') || (*str == 'i'))
		ft_putnbr(va_arg(args, int), count);
	else if (*str == 'X')
		ft_printhexade(va_arg(args, int), count, 'X');
	else if (*str == 'x')
		ft_printhexade(va_arg(args, int), count, 'x');
	else if (*str == 'u')
		ft_intsin(va_arg(args, int), count);
	else if (*str == 'p')
		ft_printmemptr(va_arg(args, unsigned long int), count);
}
