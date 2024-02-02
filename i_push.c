/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:18:13 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:47:54 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_push(t_node **psrc, t_node **pdest, char c)
{
	t_node	*first_a;
	t_node	*second_a;
	t_node	*first_b;

	if (!psrc || !*psrc || !pdest)
		return ;
	first_a = *psrc;
	second_a = first_a->next;
	first_b = *pdest;
	*pdest = first_a;
	first_a->next = first_b;
	*psrc = second_a;
	upd_all(*psrc);
	upd_all(*pdest);
	if (c == 'a')
		ft_putendl_fd("pa", 1);
	if (c == 'b')
		ft_putendl_fd("pb", 1);
}
