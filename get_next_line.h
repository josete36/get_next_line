/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macjose <macjose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:35:11 by jomoreno          #+#    #+#             */
/*   Updated: 2022/09/08 12:39:52 by macjose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *str, char const *buffer, int n);
int		ft_line(char *str, int ch_read);
size_t	ft_strlen(char const *str);

#endif
