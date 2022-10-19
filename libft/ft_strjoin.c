/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:02:06 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/10/11 11:02:08 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
	str[j++] = s1[i];
	i++;
	}
	i = 0;
	while (s2[i])
	{
	str[j++] = s2[i];
	i++;
	}
	str[j] = 0;
	return (str);
}
