/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:12:14 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/18 11:12:16 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew(f(lst ->content));
	if (new == NULL)
		return (NULL);
	tmp = new;
	while (lst)
	{
		if (lst->next)
		{
			new->next = ft_lstnew(f(lst->next->content));
			if (!new->next)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			new = new ->next;
		}
		lst = lst ->next;
	}
	new -> next = NULL;
	return (tmp);
}
