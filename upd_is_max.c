/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_is_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:39:09 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:09:26 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	upd_is_max(t_node *pile)
{
	int	max;

	if (!pile)
		return ;
	max = get_max(pile);
	while (pile)
	{
		if (pile->value == max)
			pile->is_max = true;
		else
			pile->is_max = false;
		pile = pile->next;
	}
}
