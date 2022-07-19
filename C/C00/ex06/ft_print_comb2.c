/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:02:25 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/11 10:05:21 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);
void	imprimir(char a);

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			imprimir (a / 10 + '0');
			imprimir (a % 10 + '0');
			write(1, " ", 1);
			imprimir (b / 10 + '0');
			imprimir (b % 10 + '0');
			if (a / 10 != 9 || a % 10 != 8)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

void	imprimir(char c)
{
	write(1, &c, 1);
}
