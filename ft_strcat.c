/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:54:26 by vcastro-          #+#    #+#             */
/*   Updated: 2015/11/23 22:09:19 by vcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*as1;
	int		i;
	int		j;

	as1 = s1;
	i = ft_strlen(s1);
	j = 0;
	while (s2[j] != '\0')
		as1[i++] = s2[j++];
	as1[i] = '\0';
	return (as1);
}
