/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:52:00 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:12:45 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_node *pile)
{
	int	min;

	if (!pile)
		return (0);
	min = pile->value;
	while (pile)
	{
		if (pile->value < min)
			min = pile->value;
		pile = pile->next;
	}
	return (min);
}
