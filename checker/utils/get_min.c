/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:05:24 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:05:26 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
