/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:37:11 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 09:45:01 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	del(void *inst)
{
	free(inst);
}

void	inst_delone(t_inst *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->inst);
	free(lst);
}

void	inst_clear(t_inst **lst, void (*del)(void *))
{
	t_inst	*current;
	t_inst	*next;

	if (!lst || !*lst || !del)
	{
		free(*lst);
		*lst = NULL;
		return ;
	}
	current = *lst;
	while (current)
	{
		next = current->next;
		inst_delone(current, del);
		current = next;
	}
	*lst = NULL;
}
