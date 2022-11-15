/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:43:35 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/11/15 10:43:37 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printhexa(unsigned long nb, size_t *count, char x)
{
	char	str[50];
	char	*base_char;
	int		i;

	i = 0;
	if (x == 'x')
		base_char = "0123456789abcdef";
	else
		base_char = "0123456789ABCDEF";
	if (nb == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	while (nb != 0)
	{
		str[i] = base_char [nb % 16];
		nb = nb / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], count);
}

void	ft_printmemptr(unsigned long arg, size_t *count)
{
	ft_putchar('0', count);
	ft_putchar('x', count);
	printhexa(arg, count, 'x');
}
