/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:10:57 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 11:32:40 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	i_rotate(t_node **pile)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (!pile || !*pile || !(*pile)->next)
		return ;
	first = *pile;
	second = first->next;
	last = lstlast(*pile);
	last->next = first;
	first->next = NULL;
	*pile = second;
}

void	i_rotate_both(t_node **pa, t_node **pb)
{
	if (!pa || !*pa || !(*pa)->next)
		return ;
	if (!pb || !*pb || !(*pb)->next)
		return ;
	i_rotate(pa);
	i_rotate(pb);
}
