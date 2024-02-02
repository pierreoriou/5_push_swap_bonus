/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:23:10 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 13:57:01 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_swap(t_node **pile, char c)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = *pile;
	second = first->next;
	third = second->next;
	first->next = third;
	second->next = first;
	*pile = second;
	upd_all(*pile);
	if (c == 'a')
		ft_putendl_fd("sa", 1);
	if (c == 'b')
		ft_putendl_fd("sb", 1);
}

void	i_swap_both(t_node **pa, t_node **pb)
{
	i_swap(pa, 'c');
	i_swap(pb, 'c');
	ft_putendl_fd("ss", 1);
}
