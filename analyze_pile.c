/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:38:55 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:47:51 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	analyze_pile(t_node **pile)
{
	if (lstsize(*pile) == 1 || numbers_in_order(*pile))
		return ;
	if (lstsize(*pile) == 2)
		i_swap(pile, 'a');
	if (lstsize(*pile) == 3)
		sort_three(pile);
	if (lstsize(*pile) > 3)
		turkish_algo(pile);
}
