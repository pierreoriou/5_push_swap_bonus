/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:17:33 by poriou            #+#    #+#             */
/*   Updated: 2024/01/26 17:17:38 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_print	*ft_initialize_tab(t_print *tab)
{
	tab->width = 0;
	tab->color = 0;
	tab->total_length = 0;
	tab->spaces = 0;
	return (tab);
}

int	ft_printf(const char *str, ...)
{
	int		result;
	int		i;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialize_tab(tab);
	va_start(tab->args, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '%')
			i = pf_eval_format(tab, str, i + 1);
		else
			result += write(1, &str[i], 1);
		i++;
	}
	va_end(tab->args);
	result += tab->total_length;
	free(tab);
	return (result);
}
