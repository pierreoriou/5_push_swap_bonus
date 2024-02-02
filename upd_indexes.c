/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:03:52 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:09:07 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	upd_indexes(t_node *pile)
{
	int	index;

	if (!pile)
		return ;
	index = 0;
	while (pile)
	{
		pile->index = index;
		index++;
		pile = pile->next;
	}
}
