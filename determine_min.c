/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determine_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:05:51 by poriou            #+#    #+#             */
/*   Updated: 2024/01/31 11:30:30 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*determine_min(t_node *pile)
{
	if (!pile)
		return (NULL);
	while (pile)
	{
		if (pile->is_min)
			return (pile);
		pile = pile->next;
	}
	return (NULL);
}
