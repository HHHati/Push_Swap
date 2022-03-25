/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:11:05 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 10:27:36 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**manage_param(char **argv, int argc)
{
	char	**infos;
	int		i;

	i = 0;
	if (argc == 2)
	{
		infos = ft_split(argv[1], ' ');
		if (!infos)
			return (0);
	}
	else
	{
		infos = malloc(argc * sizeof(char *));
		if (!infos)
			return (0);
		while (++i < argc)
		{
			infos[i - 1] = ft_strdup(argv[i]);
			if (!infos[i - 1])
				free_infos(infos, 1);
		}
		infos[i - 1] = 0;
	}
	return (infos);
}

t_infos	**init_infos(char *argv, int argc)
{
	char	**infos;
	t_infos	*infos;
	size_t	i;

	i = 0;
	infos = 
}