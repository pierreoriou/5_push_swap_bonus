/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:21:28 by poriou            #+#    #+#             */
/*   Updated: 2024/02/05 15:19:25 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
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
int		is_error(char **elem);
t_node	*fill_pile(char **elem);
char	**get_elem(char **argv);
void	analyze_pile(t_node **pile);
bool	numbers_in_order(t_node *pile);
void	sort_three(t_node **pile);
void	turkish_algo(t_node **pa);
void	putontop_bef_pb(t_node **pa, t_node **pb);
void	putontop_bef_pa(t_node **pa, t_node **pb);
t_node	*determine_target_under(t_node *pa, t_node *pb);
t_node	*determine_target_above(t_node *pa, t_node *pb);
t_node	*determine_cheapest(t_node *pile);
t_node	*determine_max(t_node *pile);
t_node	*determine_min(t_node *pile);

// update nodes
void	upd_main_properties(t_node *pile);
void	upd_indexes(t_node *pile);
void	upd_is_min(t_node *pile);
void	upd_is_max(t_node *pile);
void	upd_above_med(t_node *pile);
void	upd_costs_bef_pa(t_node *psrc, t_node *pdest);
void	upd_costs_bef_pb(t_node *psrc, t_node *pdest);
// void	upd_is_cheapest(t_node *pile);

// instructions
void	i_swap(t_node **pile, char c);
void	i_rotate(t_node **pile, char c);
void	i_rotate_both(t_node **pa, t_node **pb);
void	i_reverse_rotate(t_node **pile, char c);
void	i_reverse_rotate_both(t_node **pa, t_node **pb);
void	i_push(t_node **psrc, t_node **pdest, char c);

// utils folder
int		lstsize(t_node *pile);
void	free_tab(char **tab);
void	lstadd_back(t_node **lst, t_node *new);
void	clear_pile(t_node **pile);
t_node	*lstlast(t_node *lst);
t_node	*lstnew(int value);
int		get_min(t_node *pile);
int		get_max(t_node *pile);
int		find_smallest_cost(int cost_a, int cost_b);
int		find_biggest_cost(int cost_a, int cost_b);
void	print_pile(char *explain, t_node *pile);
void	print_piles(char *explain, t_node *pa, t_node *pb);
char	**ft_create_uniq_nbs(int size, int min, int max);

#endif
