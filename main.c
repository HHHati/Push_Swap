/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:40:19 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 18:10:37 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_infos	*global_infos;

	if (argv[1][0] == '\0' || argc < 2)
		exit (0);
	if (!check_params(argv, argc))
		error();
	global_infos = init_infos(argv, argc);
	swap_box(global_infos);
	if (global_infos->len > 5)
		push_swap(global_infos);
	else if (global_infos->len > 1)
		brute_push_swap(global_infos);
	free_box(global_infos, 0);
	return (0);
}
