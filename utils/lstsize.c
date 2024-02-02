/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:45:56 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:12:42 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lstsize(t_node *pile)
{
	int	size;

	if (!pile)
		return (0);
	size = 0;
	while (pile)
	{
		size++;
		pile = pile->next;
	}
	return (size);
}
