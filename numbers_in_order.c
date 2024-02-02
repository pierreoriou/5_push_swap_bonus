/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_in_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:11:56 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:06:35 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	numbers_in_order(t_node *pile)
{
	t_node	*next;

	if (!pile)
		return (false);
	if (!pile->next)
		return (true);
	while (pile->next)
	{
		next = pile->next;
		if (pile->value > next->value)
			return (false);
		pile = next;
	}
	return (true);
}
