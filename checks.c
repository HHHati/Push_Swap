/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 10:24:42 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/13 10:54:20 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_params(int argc, char **argv)
{
	int		i;
	size_t	n;

	if (argc == 2)
		return (check_param(argv[1]));
	i = 1;
	n = 0;
	while (i < argc)
	{
		while (n < ft_strlen(argv[i]))
		{
			if (n == 0 && (argv[i][0] == '+' || argv[i][0] == '-'))
				n++;
			if (!argv[i][n] || !ft_isdigit(argv[i][n]))
				return (0);
			n++;
		}
		n = 0;
		i++;
	}
	return (1);
}

int	check_param(char *s)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s) < 1 || (!ft_isdigit(s[0]) && s[0] != '-' && s[0] != '+'))
		return (0);
	if ((s[0] == '-' || s[0] == '+') && (ft_strlen(s < 2))
		return (0);
	while (ft_strlen(s) > i && s[i])
	{
		if	((s[i] == '-' || s[i] == '+') && (!s[i + 1] || !ft_isdigit(s[n + 1])))
			return (0);
		if(!(s[i] == '-' || s[i] == '+' || ft_isdigit(s[i])))
			return (0);
		i++;
		while (ft_isdigit(s[i]) && s[i])
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}
