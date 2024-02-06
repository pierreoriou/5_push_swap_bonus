/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:23:10 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 11:32:02 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	i_swap(t_node **pile)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!pile || !*pile || !(*pile)->next)
		return ;
	first = *pile;
	second = first->next;
	third = second->next;
	first->next = third;
	second->next = first;
	*pile = second;
}

void	i_swap_both(t_node **pa, t_node **pb)
{
	if (!pa || !*pa || !(*pa)->next)
		return ;
	if (!pb || !*pb || !(*pb)->next)
		return ;
	i_swap(pa);
	i_swap(pb);
}
