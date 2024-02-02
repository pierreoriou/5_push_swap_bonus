/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:05:06 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:05:07 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
