/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:23:10 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 12:07:46 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_swap(t_node **pile, char c)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!pile || !*pile || !(*pile)->next)
		return ;
	first = *pile;
	second = first->next;
	third = second->next;
	first->next = third;
	second->next = first;
	*pile = second;
	upd_main_properties(*pile);
	if (c == 'a')
		ft_putendl_fd("sa", 1);
	if (c == 'b')
		ft_putendl_fd("sb", 1);
}

void	i_swap_both(t_node **pa, t_node **pb)
{
	if (!pa || !*pa || !(*pa)->next)
		return ;
	if (!pb || !*pb || !(*pb)->next)
		return ;
	i_swap(pa, 'c');
	i_swap(pb, 'c');
	ft_putendl_fd("ss", 1);
}
