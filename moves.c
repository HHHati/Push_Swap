/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:46:09 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/13 11:33:59 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_move(t_infos *infos)
{
	int	temp;

	temp = infos->box[0];
	infos->box[0] = infos->box[1];
	infos->box[1] = temp;
	write(1, "sa\n", 3);
}

void	pa_move(t_infos *infos)
{
	int	i;
	int	temp;

	i = infos->sep;
	if (infos->sep == infos->len)
		return ;
	temp = infos->box[infos->sep];
	infos->sep = info->sep + 1;
	while (i > 0)
	{
		infos->box[i] = infos->boc[i - 1];
		i--;
	}
	infos->box[0] = temp;
	write(1, "pa\n", 3);
}

void	pb_move(t_infos *infos)
{
	int	temp;
	int	i;

	i = 0;
	if (infos->sep < 2)
		return ;
	temp = infos->box[0];
	infos->sep = infos->sep - 1;
	while (i < infos->sep)
	{
		infos->box[i] = infos->box[i + 1];
		i++;
	}
	infos->box[infos->sep] = temp;
	write(1, "pb\n", 3);
}

void	ra_move(t_infos *infos)
{
	int	temp;
	int	i;

	i = 0;
	if (infos->sep < 2)
		return ;
	temp = infos->box[0];
	while (i < infos->sep - 1)
	{
		infos->box[i] = infos->box[i + 1];
		i++;
	}
	infos->box[infos->sep - 1] = temp;
	write(1, "ra\n", 3);
}

void	rra_move(t_infos *infos)
{
	int	temp;
	int	i;

	i = infos->sep - 1;
	if (infos->sep < 2)
		return ;
	temp = infos->box[i];
	while (i > 0)
	{
		infos->box[i] = infos->box[i - 1];
		i--;
	}
	infos->box[0] = temp;
	write(1, "rra\n", 4);
}
