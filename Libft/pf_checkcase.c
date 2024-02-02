/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_checkcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:57:43 by poriou            #+#    #+#             */
/*   Updated: 2024/01/22 12:39:28 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pf_checkcase(t_print *tab, char c)
{
	if (c == 'c')
		pf_print_char(tab);
	if (c == 's')
		pf_print_str(tab);
	if (c == '?')
		pf_print_colored_str(tab);
	if (c == 'p')
		pf_print_pointer(tab);
	if (c == 'd' || c == 'i')
		pf_print_int(tab);
	if (c == 'u')
		pf_print_uint(tab);
	if (c == 'x')
		pf_print_hexal(tab);
	if (c == 'X')
		pf_print_hexau(tab);
	if (c == '%')
		tab->total_length += write(1, "%", 1);
}
