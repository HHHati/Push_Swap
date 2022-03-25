/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:40:25 by bade-lee          #+#    #+#             */
/*   Updated: 2022/03/25 18:16:21 by bade-lee         ###   ########.fr       */
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

size_t		ft_strlen(const char *str);
int			ft_isdigit(int c);
static char	*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(const char *s1);

//          ----------========== {     FCTS     } ==========----------

int			main(int argc, char **argv);
void		push_swap(t_infos *global_infos);
t_infos		**init_infos(char *argv, int argc);
void		box_index(t_data *global_infos);
static void	box_init(t_data *global_infos, char **infos);
static char	**manage_param(char **argv, int argc);
void		get_max(t_infos *global_infos, int	*new_box);
void		get_min(t_infos *global_infos, int index, int	*new_box);
int			is_sorted(t_infos *global_infos);
void		swap_box(t_infos *global_infos);
void		free_box(t_infos *global_infos, int status);
void		free_infos(char **infos, int status);
void		error(void);;
void		sa_move(t_infos *infos);
void		pa_move(t_infos *infos);
void		pb_move(t_infos *infos);
void		ra_move(t_infos *infos);
void		rra_move(t_infos *infos);
int			check_params(int argc, char **argv);
int			check_param(char *s);
int			atoi_check(char **infos);
static int	check_strings(char *s1, char *s2);
int			check_double_stack(char **infos);
void		brute_push_swap(t_infos *global_infos);
static void	brute_three(t_infos *global_infos);
static int	brute_four_easy(t_info *global_infos);
void		brute_four(t_infos *global_infos);
void		brute_five(t_infos *global_infos);

#endif