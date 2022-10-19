/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:23:56 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/09/27 11:23:57 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	car;

	car = c;
	while (*s)
	{
		if (*s == car)
		{
			return ((char *)s);
		}
		s++;
	}
	if (car == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
