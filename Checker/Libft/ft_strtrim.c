/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:29:14 by poriou            #+#    #+#             */
/*   Updated: 2023/11/16 18:02:02 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	newlen;
	char	*trim;

	if (s1 == 0)
		return (NULL);
	i = 0;
	while (s1[i] && ft_charset(s1[i], set))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_charset(s1[i], set))
		i--;
	newlen = (i + 1) - start;
	trim = ft_substr(s1, start, newlen);
	return (trim);
}
