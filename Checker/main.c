/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:07:28 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 15:54:29 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	char	**elem;
	t_node	*pile;
	t_inst	*stash;

	if (argc < 2)
		return (0);
	elem = get_elem(argv);
	if (!elem || is_error(elem))
	{
		free_tab(elem);
		return (0);
	}
	stash = NULL;
	stash_instructions(&stash, elem);
	pile = fill_pile(elem);
	free_tab(elem);
	execute_instructions(&pile, stash);
	inst_clear(&stash, del);
	check_order(pile);
	clear_pile(&pile);
	return (0);
}
