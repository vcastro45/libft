/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_savefile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:15:48 by vcastro-          #+#    #+#             */
/*   Updated: 2015/12/11 10:15:50 by vcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_savefile(int fd, char **file)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	*adr;

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		if (!(adr = ft_strjoin(*file, buf)))
			return (-1);
		ft_memdel((void**)file);
		(*file) = adr;
	}
	return (1);
}
