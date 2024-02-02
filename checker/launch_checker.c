/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:28:58 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 17:12:57 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

// verifier creer struct liste chainee (t_inst)
// apply instructions with strcmp
// renvoyer KO / OK dans check_order
// free elem, free stash (en boucle avec le vrai lstclear), free pile
// verifier leaks !!

void	launch_checker(t_node *pile)
{
	char 	*line;
	t_inst	*stash;

	if (!pile || !elem)
		return ;
	while (1)
	{
    	line = get_next_line(0);
    	if (line != NULL)
		{
			stash = stash_instructions(line);
			apply(&pile, stash);
			check_order(pile);
		}
		else
			break ;
    }
}
