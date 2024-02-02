/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_above_med.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:48:23 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:09:52 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	upd_above_med(t_node *pile)
{
	int	med;

	if (!pile)
		return ;
	med = (lstsize(pile) + 1) / 2;
	while (pile)
	{
		if (pile->index < med)
			pile->above_med = true;
		else
			pile->above_med = false;
		pile = pile->next;
	}
}
