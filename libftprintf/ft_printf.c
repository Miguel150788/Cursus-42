/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:59:52 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/27 10:59:55 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list		arg;
	size_t		count;

	va_start(arg, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_comper(arg, (char *) str, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
		if (!str)
		{
			str = "(NULL)";
			va_end(arg);
		}
	}
	va_end(arg);
	return (count);
}
