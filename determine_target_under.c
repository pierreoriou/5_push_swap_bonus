/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_target_under.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:28:20 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 12:26:24 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*determine_target_under(t_node *pa, t_node *pb)
{
	t_node	*target;
	t_node	*tmp;

	if (!pa || !pb)
		return (NULL);
	target = determine_min(pb);
	if (target->value > pa->value)
		return (determine_max(pb));
	tmp = pb;
	while (tmp)
	{
		if (tmp->value < pa->value && tmp->value > target->value)
			target = tmp;
		tmp = tmp->next;
	}
	return (target);
}
