/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:07:28 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 16:45:21 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	char	**elem;
	t_node	*pile;

	if (argc < 2
		|| (argc == 2 && argv[1][0] == '\0'))
		return (0);
	elem = get_elem(argv);
	if (is_error(elem))
	{
		free_tab(elem);
		return (0);
	}
	pile = fill_pile(elem);
	launch_checker(pile, elem);
	free_tab(elem);
	clear_pile(&pile);
	return (0);
}
