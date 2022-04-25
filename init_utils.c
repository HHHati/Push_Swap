/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:43:49 by bade-lee          #+#    #+#             */
/*   Updated: 2022/04/25 13:29:17 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_max(t_infos *global_infos, int	*new_box)
{
	int	i;
	int	current;

	current = 0;
	i = 0;
	while (i < global_infos->len)
	{
		if (global_infos->box[i] > global_infos->box[current])
			current = i;
		i++;
	}
	global_infos->box[current] = INT32_MAX;
	new_box[current] = global_infos->len - 1;
}

void	get_min(t_infos *global_infos, int index, int	*new_box)
{
	int	i;
	int	current;

	current = 0;
	i = 0;
	while (i < global_infos->len)
	{
		if (global_infos->box[i] < global_infos->box[current])
			current = i;
		i++;
	}
	global_infos->box[current] = INT32_MAX;
	new_box[current] = index;
}
