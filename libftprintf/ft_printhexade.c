/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexade.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:56:04 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/11/15 09:56:05 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F;
//Entero hexadecimal sin signo; usa "ABCDEF".
	//recorrer array = Base[resto] Descompone el nº
//Imprimimos al reves de como guarda

void	ft_printhexade(unsigned int nb, size_t *count, char x)
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
