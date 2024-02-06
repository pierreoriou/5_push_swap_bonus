/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_main_properties.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:17:10 by poriou            #+#    #+#             */
/*   Updated: 2024/02/05 10:18:15 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	upd_main_properties(t_node *pile)
{
	upd_indexes(pile);
	upd_is_min(pile);
	upd_is_max(pile);
	upd_above_med(pile);
}
