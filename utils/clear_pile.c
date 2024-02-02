/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:26:49 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:12:38 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	clear_pile(t_node **pile)
{
	t_node	*next;

	if (!pile || !*pile)
		return ;
	while (*pile)
	{
		next = (*pile)->next;
		free(*pile);
		*pile = next;
	}
	*pile = NULL;
}
