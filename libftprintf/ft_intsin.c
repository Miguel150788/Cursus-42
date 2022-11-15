/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intSin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:55:22 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/11/15 09:55:23 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//Enteros sin signos con recursividad
void	ft_intsin(unsigned int n, size_t *i)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_intsin((n / 10), i);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar(n + '0', i);
}
