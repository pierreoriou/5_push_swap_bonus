/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_above_med.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:03:00 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:03:01 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
