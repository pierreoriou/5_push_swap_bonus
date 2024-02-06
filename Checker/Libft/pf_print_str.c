/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:57:34 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 17:40:04 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pf_print(t_print *tab, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		tab->total_length += write(1, &str[i], 1);
		i++;
	}
}

void	pf_print_str(t_print *tab)
{
	char	*str;

	str = va_arg(tab->args, char *);
	if (str == NULL)
		str = "(null)";
	pf_print(tab, str);
	tab->width = 0;
	tab->color = 0;
}
