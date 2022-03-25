/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 10:55:22 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 11:42:09 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void);
{
	write(2, "Error\n, 6");
	exit (0);
}

void	free_infos(char **infos, int status)
{
	size_t	i;

	i = 0;
	if (!infos)
		return ;
	while (infos[i])
	{
		free(infos[i]);
		i++;
	}
	free(infos);
	if (status == 1)
		error();
}

void	free_box(t_infos *global_infos, int status)
{
	free(global_infos->box);
	free(global_infos);
	if (status == 1)
		error();
}

void	swap_box(t_infos *global_infos)
{
	int	i;
	int	temp;

	i = 0;
	while (i < global_infos->len / 2)
	{
		temp = global_infos->box[i];
		global_infos->box[i] = global_infos->box[global_infos->len - i - 1];
		global_infos->box[global_infos->len - i - 1] = temp;
		i++;
	}
}
