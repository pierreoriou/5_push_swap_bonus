/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_is_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:01:50 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:01:51 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	upd_is_min(t_node *pile)
{
	int	min;

	if (!pile)
		return ;
	min = get_min(pile);
	while (pile)
	{
		if (pile->value == min)
			pile->is_min = true;
		else
			pile->is_min = false;
		pile = pile->next;
	}
}
