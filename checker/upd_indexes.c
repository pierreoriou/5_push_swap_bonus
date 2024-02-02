/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:01:28 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:01:29 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
