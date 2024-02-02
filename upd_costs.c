/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_costs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:33:05 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:12:07 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	node_cost(t_node *node, t_node *pile)
{
	int	cost;

	if (node->above_med)
		cost = node->index;
	else
			cost = lstsize(pile) - node->index;
	return (cost);
}

void	find_cost( t_node *psrc, t_node *pdest, t_node *node, t_node *target)
{
	int	cost_a;
	int	cost_b;

	cost_a = node_cost(node, psrc);
	cost_b = node_cost(target, pdest);
	if (node->above_med == target->above_med)
		node->cost = find_biggest_cost(cost_a, cost_b);
	else
			node->cost = cost_a + cost_b;
}

void	upd_costs_bef_pb(t_node *psrc, t_node *pdest)
{
	t_node	*target;
	t_node	*tmp;

	tmp = psrc;
	while (tmp)
	{
		target = determine_target_under(tmp, pdest);
		find_cost(psrc, pdest, tmp, target);
		tmp = tmp->next;
	}
}

void	upd_costs_bef_pa(t_node *psrc, t_node *pdest)
{
	t_node	*target;
	t_node	*tmp;

	tmp = psrc;
	while (tmp)
	{
		target = determine_target_above(tmp, pdest);
		find_cost(psrc, pdest, tmp, target);
		tmp = tmp->next;
	}
}
