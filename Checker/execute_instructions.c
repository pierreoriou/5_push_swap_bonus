/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:15:05 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 11:28:52 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	apply_instruction(t_node **pa, t_node **pb, t_inst *stash)
{
	if (ft_strcmp(stash->inst, "pa\n") == 0)
		i_push(pb, pa);
	else if (ft_strcmp(stash->inst, "pb\n") == 0)
		i_push(pa, pb);
	else if (ft_strcmp(stash->inst, "sa\n") == 0)
		i_swap(pa);
	else if (ft_strcmp(stash->inst, "sb\n") == 0)
		i_swap(pb);
	else if (ft_strcmp(stash->inst, "ss\n") == 0)
		i_swap_both(pa, pb);
	else if (ft_strcmp(stash->inst, "ra\n") == 0)
		i_rotate(pa);
	else if (ft_strcmp(stash->inst, "rb\n") == 0)
		i_rotate(pb);
	else if (ft_strcmp(stash->inst, "rr\n") == 0)
		i_rotate_both(pa, pb);
	else if (ft_strcmp(stash->inst, "rra\n") == 0)
		i_reverse_rotate(pa);
	else if (ft_strcmp(stash->inst, "rrb\n") == 0)
		i_reverse_rotate(pb);
	else if (ft_strcmp(stash->inst, "rrr\n") == 0)
		i_reverse_rotate_both(pa, pb);
}

void	execute_instructions(t_node **pa, t_inst *stash)
{
	t_node	*pb;
	t_inst	*tmp;

	pb = NULL;
	if (!pa || !*pa || !stash)
		return ;
	tmp = stash;
	while (tmp)
	{
		apply_instruction(pa, &pb, tmp);
		tmp = tmp->next;
	}
	if (pb != NULL)
	{
		ft_putendl_fd("KO", 1);
		inst_clear(&stash, del);
		clear_pile(&pb);
		clear_pile(pa);
		exit (1);
	}
}
