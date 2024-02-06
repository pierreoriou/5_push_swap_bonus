/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:49:02 by poriou            #+#    #+#             */
/*   Updated: 2024/02/05 11:10:08 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_inst	*inst_new(void *inst)
{
	t_inst	*new_node;

	new_node = (t_inst *)malloc(sizeof(t_inst));
	if (!new_node)
		return (NULL);
	new_node->inst = inst;
	new_node->next = NULL;
	return (new_node);
}
