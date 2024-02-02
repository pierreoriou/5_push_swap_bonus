/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:51:17 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 12:41:14 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pf_print_char(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	tab->total_length += write(1, &c, 1);
	tab->width = 0;
	tab->color = 0;
}
