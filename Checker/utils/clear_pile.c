/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:18:16 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 15:18:31 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	clear_pile(t_node **pile)
{
	t_node	*next;

	if (!pile || !*pile)
		return ;
	while (*pile)
	{
		next = (*pile)->next;
		free(*pile);
		*pile = next;
	}
	*pile = NULL;
}
