/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:43:27 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/17 10:43:29 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*seg;
	int		i;

	seg = lst;
	i = 0;
	while (seg != NULL)
	{
		seg = seg->next;
		i++;
	}
	return (i);
}
