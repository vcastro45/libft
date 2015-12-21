/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:19:54 by vcastro-          #+#    #+#             */
/*   Updated: 2015/12/03 15:44:48 by vcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return ((void*)0);
	if (!content)
	{
		elem->content = (void*)0;
		elem->content_size = 0;
	}
	else
	{
		elem->content = ft_strdup(content);
		elem->content_size = content_size;
	}
	elem->next = (void*)0;
	return (elem);
}
