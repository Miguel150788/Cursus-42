/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:34:57 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/13 10:34:59 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	c;
	size_t	n;

	if (s == NULL)
		return ;
	n = ft_strlen(s);
	i = 0;
	while (i < n)
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
	write (fd, "\n", 1);
}
