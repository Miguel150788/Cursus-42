/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:44:38 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/09/27 11:44:40 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t	n)
{
	size_t	i;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
				i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *) dest + n -1) = *((char *) src + n - 1);
				n--;
		}
	}
	return (dest);
}
