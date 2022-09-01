/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:35:07 by jomoreno          #+#    #+#             */
/*   Updated: 2022/08/27 18:53:16 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	char		*buffer;
	int			chread;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (ft_line != 0)
	{
		chread = read(fd, buffer, BUFFER_SIZE);
		if (chread == -1)
			return (NULL);
		if (chread == 0)
		{
			free (buffer);
			return (NULL);
		}
	str = ft_strjoin(char const *str, char const *buffer, int chread)
	}
}
