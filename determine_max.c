/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:34:48 by poriou            #+#    #+#             */
/*   Updated: 2024/01/31 11:30:15 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*determine_max(t_node *pile)
{
	if (!pile)
		return (NULL);
	while (pile)
	{
		if (pile->is_max)
			return (pile);
		pile = pile->next;
	}
	return (NULL);
}
