/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_hexal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:25:20 by poriou            #+#    #+#             */
/*   Updated: 2024/01/22 09:54:54 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pf_print_hexal(t_print *tab)
{
	unsigned int	x;

	x = va_arg(tab->args, unsigned int);
	tab->total_length += pf_itoa_base(x, "0123456789abcdef");
	tab->width = 0;
	tab->color = 0;
}
