/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stash_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:28:58 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 16:54:34 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	parse_instruction(char *line)
{
	int		i;
	char	**ti;

	i = 0;
	ti = ft_split("sa\n,sb\n,ss\n,ra\n,rb\n,rr\n,rra\n,rrb\n,rrr\n,pa\n,pb\n", ",");
	while (ti[i])
	{
		if (ft_strcmp(line, ti[i]) == 0)
		{
			free_tab(ti);
			return (1);
		}
		i++;
	}
	free(line);
	free_tab(ti);
	return (0);
}

static void	add_to_stash(t_inst **stash, char *line)
{
	t_inst	*new;

	new = inst_new(line);
	inst_add_back(stash, new);
}

static void	error_in_instructions(t_inst **stash, char **elem)
{
	free_tab(elem);
	inst_clear(stash, del);
	ft_putendl_fd("Error", 2);
	exit (1);
}

void	stash_instructions(t_inst **stash, char **elem)
{
	char	*line;

	if (!stash)
		return ;
	while (1)
	{
		line = get_next_line(0);
		if (line != NULL)
		{
			if (parse_instruction(line))
				add_to_stash(stash, line);
			else
				error_in_instructions(stash, elem);
		}
		else
		{
			free(line);
			break ;
		}
	}
}
