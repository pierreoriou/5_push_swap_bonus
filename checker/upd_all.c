/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upd_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:01:15 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:01:16 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	upd_all(t_node *pile)
{
	upd_indexes(pile);
	upd_is_min(pile);
	upd_is_max(pile);
	upd_above_med(pile);
}
