/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:17:14 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 18:35:41 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen_gnl(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	a;
	size_t	b;
	char	*line;

	line = malloc(sizeof(char) * ((ft_strlen_gnl(s1) + ft_strlen_gnl(s2)) + 1));
	if (!line)
	{
		free(s1);
		return (0);
	}
	a = 0;
	b = 0;
	while (s1[a])
	{
		line[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		line[a + b] = s2[b];
		b++;
	}
	line[ft_strlen_gnl(s1) + ft_strlen_gnl(s2)] = '\0';
	free(s1);
	return (line);
}
