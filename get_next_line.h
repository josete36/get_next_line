/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:35:11 by jomoreno          #+#    #+#             */
/*   Updated: 2022/09/01 19:51:07 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *str, char const *buffer, int n);
int		ft_line(char *str, int ch_read);

#endif
