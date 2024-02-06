/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:10:57 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 12:08:15 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_rotate(t_node **pile, char c)
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
	upd_main_properties(*pile);
	if (c == 'a')
		ft_putendl_fd("ra", 1);
	if (c == 'b')
		ft_putendl_fd("rb", 1);
}

void	i_rotate_both(t_node **pa, t_node **pb)
{
	if (!pa || !*pa || !(*pa)->next)
		return ;
	if (!pb || !*pb || !(*pb)->next)
		return ;
	i_rotate(pa, 'c');
	i_rotate(pb, 'c');
	ft_putendl_fd("rr", 1);
}
