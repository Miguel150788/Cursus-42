/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:48:13 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/18 18:48:17 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_cont(char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = ft_cont(src);
	while( dest[i] != '\0' && i < nb)
	{
		src[j] = dest[i];
		j++;
		i++;
	}
	return (src);
}
int ft_cont(char *src)
{
	unsigned int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main()
{
	char src [] = "hola";
	char dest [] = "mundo";
	unsigned int nb;

	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}
