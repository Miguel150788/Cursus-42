/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:49:50 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/14 08:49:55 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	saw;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		saw = tab[i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = saw;
		i++;
	}
}