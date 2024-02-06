/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_piles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:41 by poriou            #+#    #+#             */
/*   Updated: 2024/02/05 15:21:43 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_piles(char *explain, t_node *pa, t_node *pb)
{
	int	size;

	if (lstsize(pa) >= lstsize(pb))
		size = lstsize(pa);
	else
		size = lstsize(pb);
	ft_printf("%s\n", explain);
	while (size)
	{
		if (pa)
			ft_printf("%d", pa->value);
		else
			ft_printf("  ");
		ft_printf("   ");
		if (pb)
			ft_printf("%d", pb->value);
		ft_printf("\n");
		if (pa)
			pa = pa->next;
		if (pb)
			pb = pb->next;
		size--;
	}
	ft_printf("-    -\n");
	ft_printf("a    b\n");
}
