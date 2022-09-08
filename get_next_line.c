/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macjose <macjose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:35:07 by jomoreno          #+#    #+#             */
/*   Updated: 2022/09/08 12:27:49 by macjose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	char		*buffer;
	int			ch_read;
	
	buffer = BUFFER_SIZE;
	buffer[BUFFER_SIZE + 1] = '\0';
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (!ft_line(str, ch_read))
	{
		ch_read = read(fd, buffer, BUFFER_SIZE);
		if (ch_read == -1)
			return (NULL);
		if (ch_read == 0)
		{
			free (str);
			return (NULL);
		}
	str = ft_strjoin(char const *str, char const *buffer)
	}
}
