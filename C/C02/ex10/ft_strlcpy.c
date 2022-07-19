/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:52:00 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/17 08:52:02 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_numb(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = ft_numb(src);
	while (src[i] != '\0' && i < size -1)
	{
		dest [i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
