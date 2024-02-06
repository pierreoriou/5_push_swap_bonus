/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:47:30 by poriou            #+#    #+#             */
/*   Updated: 2024/02/05 14:55:56 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_order(t_node *pile)
{
	if (!numbers_in_order(pile))
		ft_putendl_fd("KO", 1);
	else
		ft_putendl_fd("OK", 1);
}
