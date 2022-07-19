/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:21:30 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/16 11:22:05 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	ft_strupcase (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] = str[i] - 32;
				j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		j = 0;
		else
		j = 1;
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
			i++;
	}
	return (str);
}
