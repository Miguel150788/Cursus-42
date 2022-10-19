/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:57:48 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/13 09:57:49 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	char	c;
	size_t	x;

	if (s == NULL)
		return ;
	i = 0;
	x = ft_strlen(s);
	while (i < x)
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
}
