/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:43:58 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/13 18:44:04 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str);
void	ft_swap(	int *a, int *b);

void	ft_swap(	int *a, int *b)
{
	int	j;

	j = *b;
	*b = *a;
	*a = j;
}

void	ft_rev_int_tab(	int *tab, int size)
{
	int	j;
	int	i;

	i = size;
	while (i >= 0)
	{
		j = 0;
		while (j < size)
		{
			if (tab [j] > tab[j + 1])
			{
				ft_swap (&tab [j], &tab [j + 1]);
			}
			j++;
		}
		i--;
	}
}
