/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:07:56 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:59:38 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "./Libft/libft.h"
# include "./Libft/Get_next_line/get_next_line.h"
# include <stdbool.h>

typedef struct s_node
{
	int				value;
	int				index;
	bool			is_min;
	bool			is_max;
	bool			above_med;
	int				cost;
	struct s_node	*next;
}					t_node;

int		main(int argc, char *argv[]);
void	launch_checker(t_node *pile);
int		is_error(char **elem);
t_node	*fill_pile(char **elem);
char	**get_elem(char **argv);
void	upd_all(t_node *pile);
void	upd_above_med(t_node *pile);
void	upd_indexes(t_node *pile);
void	upd_is_max(t_node *pile);
void	upd_is_min(t_node *pile);

// utils folder
int		get_max(t_node *pile);
int		get_min(t_node *pile);
int		lstsize(t_node *pile);
void	clear_pile(t_node **pile);
void	free_tab(char **tab);
void	lstadd_back(t_node **lst, t_node *new);
t_node	*lstnew(int value);
t_node	*lstlast(t_node *lst);

#endif
