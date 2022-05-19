/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:40:19 by bade-lee          #+#    #+#             */
/*   Updated: 2022/05/19 13:08:30 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_infos *global_infos)
{
	int		i;
	size_t	n;

	if (is_sorted(global_infos))
		return ;
	n = 0;
	while (!is_sorted(global_infos))
	{
		i = 0;
		while (i < global_infos->len)
		{
			if (!((global_infos->box[0] >> n) & 1))
				pb_move(global_infos);
			else if (global_infos->sep < 2)
				break ;
			else
				ra_move(global_infos);
			i++;
		}
		while (global_infos->sep < global_infos->len)
			pa_move(global_infos);
		n++;
	}
}

int	main(int argc, char **argv)
{
	t_infos	*global_infos;

	if (argc < 2 || argv[1][0] == '\0')
		exit (0);
	if (!check_params(argv, argc))
		error();
	global_infos = init_infos(argv, argc);
	if (global_infos->len > 5)
		push_swap(global_infos);
	else if (global_infos->len > 1)
		brute_push_swap(global_infos);
	free_box(global_infos, 0);
	return (0);
}
