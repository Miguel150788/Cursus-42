/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:03:41 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/09/26 12:03:43 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	num = 0;
	i = 0;
	neg = 1;
	while ((str[i] == 32) || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-')
	{
		neg = neg * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	num = num * neg;
	return (num);
}
