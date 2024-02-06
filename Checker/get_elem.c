/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:21:32 by poriou            #+#    #+#             */
/*   Updated: 2024/02/02 15:21:34 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	**get_elem(char **argv)
{
	char	**elements;
	int		i;
	int		n_of_elem;

	i = 1;
	while (argv[i])
		i++;
	n_of_elem = i - 1;
	if (n_of_elem == 1)
	{
		elements = ft_split(argv[1], "\t\n\v\f ");
		return (elements);
	}
	elements = (char **)malloc((n_of_elem + 1) * sizeof(char *));
	if (elements == NULL)
		return (NULL);
	i = 1;
	while (argv[i])
	{
		elements[i - 1] = ft_strdup(argv[i]);
		i++;
	}
	elements[i - 1] = NULL;
	return (elements);
}
