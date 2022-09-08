/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macjose <macjose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:35:02 by jomoreno          #+#    #+#             */
/*   Updated: 2022/09/08 12:26:04 by macjose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *str, char const *buffer)
{
	int		i;
	int		j;
	char	*s3;

	s3 = malloc((ft_strlen(str) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s3[i] = str[i];
		i++;
	}
	j = 0;
	while (buffer[j] != '\0')
	{
		s3[i] = buffer[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}

int	ft_line(char *str, int ch_read)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str)
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	if (ch_read < BUFFER_SIZE)
		return (1);
	return (0);
}
