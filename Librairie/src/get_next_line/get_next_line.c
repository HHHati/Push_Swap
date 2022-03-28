/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:17:21 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 18:35:47 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

char	*ft_read_line(int fd, char *s)
{
	char	*buffer;
	ssize_t	r;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	r = -5;
	while (!ft_strchr_gnl(s, '\n'))
	{
		r = read(fd, buffer, BUFFER_SIZE);
		if (r == 0)
			break ;
		if (r == -1)
		{
			break ;
		}
		buffer[r] = '\0';
		s = ft_strjoin_gnl(s, buffer);
		if (!s)
			return (0);
	}
	free(buffer);
	return (s);
}

char	*ft_get_line(char *s)
{
	int		i;
	char	*line;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (0);
	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
	{
		line[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_new_stat(char *s)
{
	char	*new;
	int		i;
	int		n;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	if (!s[i])
	{
		free(s);
		return (0);
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen_gnl(s) - i + 1));
	if (!new)
	{
		free(s);
		return (0);
	}
	n = 0;
	i++;
	while (s[i] != '\0')
		new[n++] = s[i++];
	new[n] = '\0';
	free(s);
	return (new);
}

static char	*final_line(char **s, int fd)
{
	char		*line;

	s[fd] = ft_read_line(fd, s[fd]);
	if (!s[fd])
		return (0);
	if (ft_strchr_gnl(s[fd], '\n'))
	{
		line = ft_get_line(s[fd]);
		s[fd] = ft_new_stat(s[fd]);
		return (line);
	}
	else
	{
		if (s[fd][0] == '\0')
		{
			free(s[fd]);
			return (0);
		}
		line = ft_strdup(s[fd]);
		s[fd][0] = '\0';
		return (line);
	}
}

char	*get_next_line(int fd)
{
	static char	*s[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || fd >= OPEN_MAX)
		return (0);
	if (!s[fd])
		s[fd] = ft_strdup("");
	if (ft_strchr_gnl(s[fd], '\n'))
	{
		line = ft_get_line(s[fd]);
		s[fd] = ft_new_stat(s[fd]);
		return (line);
	}
	else
		return (final_line(s, fd));
}
