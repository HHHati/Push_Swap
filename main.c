/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:40:19 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/13 11:05:34 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_infos	*infos;

	if (argv[1][0] == '\0' || argc < 2)
		exit (0);
	if (!check_params(argv, argc))
		error();
	infos = 
}