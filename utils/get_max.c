/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:56:56 by poriou            #+#    #+#             */
/*   Updated: 2024/01/31 11:30:21 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_node *pile)
{
	int	max;

	if (!pile)
		return (0);
	max = pile->value;
	while (pile)
	{
		if (pile->value > max)
			max = pile->value;
		pile = pile->next;
	}
	return (max);
}
