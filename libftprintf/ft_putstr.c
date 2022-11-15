/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:56:35 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/11/15 09:56:36 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//recorrer char a char y lo imprime como String
void	ft_putstr(char *str, size_t *count)
{	
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str, count);
		str++;
	}
}
