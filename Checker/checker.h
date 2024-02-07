/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:07:56 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 16:54:33 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../Libft/libft.h"
# include <stdbool.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_inst
{
	char			*inst;
	struct s_inst	*next;
}					t_inst;

int		main(int argc, char *argv[]);
char	**get_elem(char **argv);
int		is_error(char **elem);
t_node	*fill_pile(char **elem);
void	stash_instructions(t_inst **stash, char **elem);
void	execute_instructions(t_node **pa, t_inst *stash);
bool	numbers_in_order(t_node *pile);
void	check_order(t_node *pile);
void	i_push(t_node **psrc, t_node **pdest);
void	i_swap(t_node **pile);
void	i_swap_both(t_node **pa, t_node **pb);
void	i_rotate(t_node **pile);
void	i_rotate_both(t_node **pa, t_node **pb);
void	i_reverse_rotate(t_node **pile);
void	i_reverse_rotate_both(t_node **pa, t_node **pb);

// utils folder
int		lstsize(t_node *pile);
void	clear_pile(t_node **pile);
void	free_tab(char **tab);
void	lstadd_back(t_node **lst, t_node *new);
t_node	*lstnew(int value);
t_node	*lstlast(t_node *lst);
void	inst_add_back(t_inst **lst, t_inst *new);
t_inst	*inst_new(void *content);
t_inst	*inst_last(t_inst *lst);
void	inst_clear(t_inst **lst, void (*del)(void *));
void	del(void *inst);

#endif
