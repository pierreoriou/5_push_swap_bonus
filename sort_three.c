/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:56:59 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:47:53 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **pile)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!pile || !*pile)
		return ;
	first = *pile;
	second = first->next;
	third = second->next;
	if (first->value == get_max(*pile))
		i_rotate(pile, 'a');
	else if (second->value == get_max(*pile))
		i_reverse_rotate(pile, 'a');
	if ((*pile)->value > (*pile)->next->value)
		i_swap(pile, 'a');
	upd_indexes(*pile);
}
