/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:55:45 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 17:56:25 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
