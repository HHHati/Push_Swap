/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:55:45 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/28 09:57:41 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	brute_three(t_infos *global_infos)
{
	if (global_infos->box[0] == 1 && global_infos->box[1] == 0
		&& global_infos->box[2] == 2)
		sa_move(global_infos);
	else if (global_infos->box[0] == 0 && global_infos->box[1] == 2
		&& global_infos->box[2] == 1)
	{
		rra_move(global_infos);
		sa_move(global_infos);
	}
	else if (global_infos->box[0] == 2 && global_infos->box[1] == 0
		&& global_infos->box[2] == 1)
		ra_move(global_infos);
	else if (global_infos->box[0] == 1 && global_infos->box[1] == 2
		&& global_infos->box[2] == 0)
		rra_move(global_infos);
	else if (global_infos->box[0] == 2 && global_infos->box[1] == 1
		&& global_infos->box[2] == 0)
	{
		ra_move(global_infos);
		sa_move(global_infos);
	}
}

static int	brute_four_easy(t_infos *global_infos)
{
	if (global_infos->box[0] == 1 && global_infos->box[1] == 0
		&& global_infos->box[2] == 2 && global_infos->box[3] == 3)
	{
		sa_move(global_infos);
		return (1);
	}
	else if (global_infos->box[0] == 1 && global_infos->box[1] == 2
		&& global_infos->box[2] == 3 && global_infos->box[3] == 0)
	{
		rra_move(global_infos);
		return (1);
	}
	else if (global_infos->box[0] == 3 && global_infos->box[1] == 0
		&& global_infos->box[2] == 1 && global_infos->box[3] == 2)
	{
		ra_move(global_infos);
		return (1);
	}
	else
		return (0);
}

void	brute_four(t_infos *global_infos)
{
	int	i;

	if (brute_four_easy(global_infos))
		return ;
	if (global_infos->box[1] == 0)
		ra_move(global_infos);
	else if (global_infos->box[2] == 0)
	{
		ra_move(global_infos);
		ra_move(global_infos);
	}
	else if (global_infos->box[3] == 0)
		rra_move(global_infos);
	pb_move(global_infos);
	i = 0;
	while (i < global_infos->sep)
	{
		global_infos->box[i] -= 1;
		i++;
	}
	brute_three(global_infos);
	pa_move(global_infos);
}

void	brute_five(t_infos *global_infos)
{
	int	i;

	i = 0;
	if (global_infos->box[4] == 0)
	{
		rra_move(global_infos);
		i = 1;
	}
	else if (global_infos->box[3] == 0)
	{
		rra_move(global_infos);
		rra_move(global_infos);
		i = 1;
	}
	while (global_infos->box[0] != 0 && i == 0)
		ra_move(global_infos);
	pb_move(global_infos);
	i = 0;
	while (i < global_infos->sep)
	{
		global_infos->box[i] -= 1;
		i++;
	}
	brute_four(global_infos);
	pa_move(global_infos);
}

void	brute_push_swap(t_infos *global_infos)
{
	if (is_sorted(global_infos))
		return ;
	else if (global_infos->sep == 2
		&& global_infos->box[0] > global_infos->box[1])
		ra_move(global_infos);
	else if (global_infos->sep == 3)
		brute_three(global_infos);
	else if (global_infos->sep == 4)
		brute_four(global_infos);
	else
		brute_five(global_infos);
}
