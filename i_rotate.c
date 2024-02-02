/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:10:57 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 11:07:06 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_rotate(t_node **pile, char c)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (!pile || !*pile)
		return ;
	first = *pile;
	second = first->next;
	last = lstlast(*pile);
	last->next = first;
	first->next = NULL;
	*pile = second;
	upd_all(*pile);
	if (c == 'a')
		ft_putendl_fd("ra", 1);
	if (c == 'b')
		ft_putendl_fd("rb", 1);
}

void	i_rotate_both(t_node **pa, t_node **pb)
{
	i_rotate(pa, 'c');
	i_rotate(pb, 'c');
	ft_putendl_fd("rr", 1);
}
