/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:10:12 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:09:22 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	upd_all(t_node *pile)
{
	upd_indexes(pile);
	upd_is_min(pile);
	upd_is_max(pile);
	upd_above_med(pile);
}
