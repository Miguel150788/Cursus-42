/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:17:33 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/18 18:17:36 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_contar(char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_contar(src);
	while (dest[i] != '\0' )
	{
		src[j] = dest[i];
		i++;
		j++;
	}
	src[j] = '\0';
	return (src);
}

int	ft_contar(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main ()
{
char src [] = "hola";
char dest [] = "mundo";
ft_strcat(dest, src);
printf("%s", src );
return (0);
}