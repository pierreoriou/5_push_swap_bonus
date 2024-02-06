/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:08:52 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 12:10:06 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**elem;
	t_node	*pile;

	if (argc < 2)
		return (0);
	elem = get_elem(argv);
	if (is_error(elem))
	{
		free_tab(elem);
		return (0);
	}
	pile = fill_pile(elem);
	free_tab(elem);
	analyze_pile(&pile);
	clear_pile(&pile);
	return (0);
}
