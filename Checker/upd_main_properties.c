/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_main_properties.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:01:15 by poriou            #+#    #+#             */
/*   Updated: 2024/02/05 10:21:11 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	upd_main_properties(t_node *pile)
{
	upd_indexes(pile);
	upd_is_min(pile);
	upd_is_max(pile);
	upd_above_med(pile);
}
