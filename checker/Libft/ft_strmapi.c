/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:00:22 by poriou            #+#    #+#             */
/*   Updated: 2023/11/16 18:00:33 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new_s = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		new_s[i] = (f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
