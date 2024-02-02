/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_piles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:41 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 14:45:45 by poriou           ###   ########.fr       */
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
	printf("%s\n", explain);
	while (size)
	{
		if (pa)
			printf("%d", pa->value);
		else
			printf("  ");
		printf("   ");
		if (pb)
			printf("%d", pb->value);
		printf("\n");
		if (pa)
			pa = pa->next;
		if (pb)
			pb = pb->next;
		size--;
	}
	printf("-    -\n");
	printf("a    b\n");
}
