/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:20:06 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 15:20:07 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_node	*fill_pile(char **elem)
{
	int		index;
	int		value;
	t_node	*pile;
	t_node	*new_node;

	if (!elem || !*elem)
		return (NULL);
	index = 0;
	pile = NULL;
	while (elem[index])
	{
		value = ft_atoi(elem[index]);
		new_node = lstnew(value);
		lstadd_back(&pile, new_node);
		index++;
	}
	upd_all(pile);
	return (pile);
}
