/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:11:05 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 11:23:14 by bade-lee         ###   ########.fr       */
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
		infos = ft_split(av[1], ' ');
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
			infos[i - 1] = ft_strdup(av[i]);
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
	t_infos	*global_infos;
	size_t	n;

	n = 0;
	infos = manage_param(argv, argc);
	if (!infos || !atoi_check(infos) || check_double_stack(infos))
		error();
	if (!infos[0])
		free_infos(infos, 1);
	global_infos = malloc(sizeof(t_infos *));
	if (!global_infos)
		free_infos(infos, 1);
	global_infos->len = 0;
	while (infos[global_infos->len])
		global_infos->len = global_infos->len + 1;
		global_infos->sep = global_infos->len
}
