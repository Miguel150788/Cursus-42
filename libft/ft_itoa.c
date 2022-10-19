/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:39:30 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/13 09:39:33 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	bucle(int i, int len, long nb, char *res)
{
	while (i <= len && nb > 0)
	{
		res[len - i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	return (*res);
}

int	ft_len(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		size = 1;
	}
	if (nb / 10 == 0)
		return (size + 1);
	else
		nb = nb / 10;
	return (size + ft_len(nb) + 1);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	i;
	size_t			len;
	long			nb;

	nb = n;
	len = ft_len(nb);
	res = (char *)malloc(sizeof(*res) *(len + 1));
	if (res == NULL)
		return (NULL);
	res[len--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		res[0] = '-';
	}
	if (nb == 0)
		res[len] = '0';
	i = 0;
	*res = bucle (i, len, nb, res);
	return (res);
}
