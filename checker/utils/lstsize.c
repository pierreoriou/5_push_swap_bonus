/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:57:38 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 15:57:40 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
