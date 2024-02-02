/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_cheapest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:54:22 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 12:21:23 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*determine_cheapest(t_node *pile)
{
	t_node	*cheapest;

	if (!pile)
		return (NULL);
	cheapest = pile;
	while (pile)
	{
		if (pile->cost < cheapest->cost)
			cheapest = pile;
		pile = pile->next;
	}
	return (cheapest);
}
