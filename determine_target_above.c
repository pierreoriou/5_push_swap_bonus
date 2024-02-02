/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_target_above.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:28:03 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 12:38:53 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*determine_target_above(t_node *pb, t_node *pa)
{
	t_node	*target;
	t_node	*tmp;

	if (!pa || !pb)
		return (NULL);
	target = determine_max(pa);
	if (target->value < pb->value)
		return (determine_min(pa));
	tmp = pa;
	while (tmp)
	{
		if (tmp->value > pb->value && tmp->value < target->value)
			target = tmp;
		tmp = tmp->next;
	}
	return (target);
}
