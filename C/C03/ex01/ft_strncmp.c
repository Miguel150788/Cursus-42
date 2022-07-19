/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:21:06 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/18 17:21:11 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while((s1[i] == s2[i] && i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s1 [] = "Hola Mundo";
	char s2 [] = "Hola mundo";

	int n;

	n = 4;
	printf("%d", ft_strncmp(s1, s2, 6));
	return (0);
}
