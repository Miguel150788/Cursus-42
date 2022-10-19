/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:28:57 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/10 09:28:59 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rts;

	rts = (void *)malloc(count * size);
	if (rts == NULL)
	{
		return (NULL);
	}
	ft_bzero(rts, count * size);
	return (rts);
}
