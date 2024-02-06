/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_colored_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:58:46 by poriou            #+#    #+#             */
/*   Updated: 2024/01/22 14:50:58 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pf_colored_print(t_print *tab, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		tab->total_length += write(1, &str[i], 1);
		i++;
	}
	tab->total_length -= 11;
}

void	pf_print_colored_str(t_print *tab)
{
	char	*str;
	char	*tmp_1;
	char	*tmp_2;
	char	*color;

	str = va_arg(tab->args, char *);
	if (str == NULL)
		str = "(null)";
	if (tab->width != 0)
	{
		color = ft_itoa(tab->width);
		tmp_1 = ft_strjoin("\033[1;", color);
		free(color);
		tmp_2 = ft_strjoin(tmp_1, "m");
		free(tmp_1);
		tmp_1 = ft_strjoin(tmp_2, str);
		free(tmp_2);
		str = ft_strjoin(tmp_1, "\033[0m");
		free(tmp_1);
	}
	pf_colored_print(tab, str);
	free(str);
	tab->width = 0;
	tab->color = 0;
}
