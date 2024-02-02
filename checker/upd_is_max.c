/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_is_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:01:39 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:01:43 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
