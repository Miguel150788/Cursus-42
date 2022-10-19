/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:43:41 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/04 10:43:44 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;
	char	*last;
	char	cat;

	cat = (char)c;
	last = (char *)s;
	x = ft_strlen(s);
	while (x > 0)
	{
		if (last[x] == cat)
		{
			return (last + x);
		}
		x--;
	}
	if (last[x] == cat)
		return (last);
	return (0);
}
