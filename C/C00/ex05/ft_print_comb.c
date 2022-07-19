/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:18:29 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/13 10:50:18 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_imprimir(char a,	char b,	char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '9')
	{
		b = a +1;
		while (b <= '9')
		{
			c = b +1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				ft_imprimir (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_imprimir(char a,	char b,	char c)
{
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
}
int main ()
{
	ft_print_comb();
	return(0);
}
