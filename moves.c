/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:46:09 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/13 11:28:05 by bade-lee         ###   ########.fr       */
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
	
}

void	rr_move(t_infos *infos)
{
	
}

void	rra_move(t_infos *infos)
{
	
}