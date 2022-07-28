/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:22:01 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/21 09:22:05 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{	
	int	i;
	int	num;
	int	cont;

	num = 0;
	cont = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			cont = cont * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	num = num * cont;
	return (num);
}
