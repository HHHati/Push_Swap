/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:40:25 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/13 11:02:49 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//          ----------========== {   INCLUDES   } ==========----------

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

//          ----------========== {    STRUCT    } ==========----------

typedef struct s_infos
{
	int	*box;
	int	sep;
	int	len;
}				t_infos;

//          ----------========== {    LIB FT    } ==========----------

size_t	ft_strlen(const char *str);
int		ft_isdigit(int c);

//          ----------========== {     FCTS     } ==========----------

#endif