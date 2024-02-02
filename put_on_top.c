/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_on_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:15:50 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 13:34:53 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_both_nodes(t_node **pa, t_node **pb, t_node *cheapst, t_node *targ)
{
	if (cheapst->above_med && targ->above_med)
	{
		while (cheapst->index > 0 && targ->index > 0)
			i_rotate_both(pa, pb);
	}
	else if (!cheapst->above_med && !targ->above_med)
	{
		while (cheapst->index > 0 && targ->index > 0)
			i_reverse_rotate_both(pa, pb);
	}
}

void	move_nodes_pb(t_node **pa, t_node **pb, t_node *cheapst, t_node *targ)
{
	if (!pa || !pb || !cheapst || !targ)
		return ;
	move_both_nodes(pa, pb, cheapst, targ);
	while (cheapst->above_med && cheapst->index > 0)
		i_rotate(pa, 'a');
	while (targ->above_med && targ->index > 0)
		i_rotate(pb, 'b');
	while (!cheapst->above_med && cheapst->index > 0)
		i_reverse_rotate(pa, 'a');
	while (!targ->above_med && targ->index > 0)
		i_reverse_rotate(pb, 'b');
}

void	move_nodes_pa(t_node **pb, t_node **pa, t_node *cheapst, t_node *targ)
{
	if (!pa || !pa || !cheapst || !targ)
		return ;
	move_both_nodes(pa, pb, cheapst, targ);
	while (cheapst->above_med && cheapst->index > 0)
		i_rotate(pb, 'b');
	while (targ->above_med && targ->index > 0)
		i_rotate(pa, 'a');
	while (!cheapst->above_med && cheapst->index > 0)
		i_reverse_rotate(pb, 'b');
	while (!targ->above_med && targ->index > 0)
		i_reverse_rotate(pa, 'a');
}

void	putontop_bef_pb(t_node **pa, t_node **pb)
{
	t_node	*cheapest;
	t_node	*target;

	if (!pa || !pb)
		return ;
	upd_costs_bef_pb(*pa, *pb);
	cheapest = determine_cheapest(*pa);
	target = determine_target_under(cheapest, *pb);
	move_nodes_pb(pa, pb, cheapest, target);
}

void	putontop_bef_pa(t_node **pa, t_node **pb)
{
	t_node	*cheapest;
	t_node	*target;

	if (!pa || !pb || !*pa || !*pb)
		return ;
	upd_costs_bef_pa(*pb, *pa);
	cheapest = determine_cheapest(*pb);
	target = determine_target_above(cheapest, *pa);
	move_nodes_pa(pb, pa, cheapest, target);
}
