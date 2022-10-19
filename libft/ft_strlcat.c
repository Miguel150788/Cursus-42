/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:31:57 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/09/27 10:31:58 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	dlen;
	unsigned int	slen;

	x = 0;
	i = 0;
	x = ft_strlen(dst);
	dlen = x;
	slen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] != '\0' && i < dstsize - dlen - 1)
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (dlen + slen);
}
