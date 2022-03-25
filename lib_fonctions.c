/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_fonctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:01:37 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 10:43:23 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return (0);
	return (ft_strcpy(s2, s1));
}