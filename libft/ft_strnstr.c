/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:14:08 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/07 10:14:09 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && j + i < len)
			{
				if (haystack[i + j] == needle[j] && needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				else if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
