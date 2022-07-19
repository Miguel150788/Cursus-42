/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:19:55 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/15 12:20:10 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		i++;
		}
		else
			return (0);
	}
	return (1);
}
int main()
{
	char str [] = "hola mundo";
	int sup;
	sup = ft_str_is_uppercase(str);
	printf("%d, ",sup);
	return (0);
}
