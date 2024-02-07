/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:13:00 by poriou            #+#    #+#             */
/*   Updated: 2024/02/07 11:27:35 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complete_sort_pa(t_node **pile)
{
	t_node	*min;

	if (!pile || !*pile)
		return ;
	min = determine_min(*pile);
	while (min->index)
	{
		if (min->above_med)
			i_rotate(pile, 'a');
		else if (!min->above_med)
			i_reverse_rotate(pile, 'a');
	}
}

void	turkish_algo(t_node **pa)
{
	t_node	*pb;

	if (!pa || !*pa)
		return ;
	pb = NULL;
	i_push(pa, &pb, 'b');
	if (lstsize(*pa) > 3)
		i_push(pa, &pb, 'b');
	while ((lstsize(*pa) > 3))
	{
		putontop_bef_pb(pa, &pb);
		i_push(pa, &pb, 'b');
	}
	sort_three(pa);
	while (lstsize(pb) > 0)
	{
		putontop_bef_pa(pa, &pb);
		i_push(&pb, pa, 'a');
	}
	complete_sort_pa(pa);
	clear_pile(&pb);
}
