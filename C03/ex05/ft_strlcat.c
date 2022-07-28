/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:58:14 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/22 09:31:56 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_contador(char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sal;
	unsigned int	ent;

	i = 0;
	sal = ft_contador(dest);
	ent = ft_contador(src);
	if (dest[i] == '\0')
		return (ent);
	if (size == 0 || size <= sal)
		return (ent + size);
	while (src[i] != '\0' && i < size - sal - 1)
	{
		dest[sal + i] = src [i];
		i++;
		sal++;
	}
	dest[sal] = '\0';
	return (sal + i);
}

int	ft_contador(char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	src[j] = '\0';
	return (j);
}
int main()
{
	char src [] = "123";
	char dest [] = "554";
	unsigned int size;
	size = 2;
	printf("%u\n", ft_strlcat(dest, src, size));

	return (0);
}