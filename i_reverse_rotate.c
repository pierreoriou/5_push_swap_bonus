/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_reverse_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:23:45 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 13:50:12 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_reverse_rotate(t_node **pile, char c)
{
	t_node	*first;
	t_node	*bef_last;
	t_node	*last;

	if (!pile || !*pile)
		return ;
	first = *pile;
	last = lstlast(*pile);
	while ((*pile)->next->next)
		*pile = (*pile)->next;
	bef_last = *pile;
	last->next = first;
	*pile = last;
	bef_last->next = NULL;
	upd_all(*pile);
	if (c == 'a')
		ft_putendl_fd("rra", 1);
	if (c == 'b')
		ft_putendl_fd("rrb", 1);
}

void	i_reverse_rotate_both(t_node **pa, t_node **pb)
{
	i_reverse_rotate(pa, 'c');
	i_reverse_rotate(pb, 'c');
	ft_putendl_fd("rrr", 1);
}
