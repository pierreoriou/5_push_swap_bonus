/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:18:13 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 16:44:25 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	pf_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (pf_strlen((char *)src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (pf_strlen((char *)src));
}

size_t	pf_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	if ((dst == 0 || src == 0) && size == 0)
		return (0);
	dest_len = pf_strlen(dst);
	i = 0;
	if (size <= dest_len || !size)
		return (pf_strlen((char *)src) + size);
	while (src[i] && dest_len + i < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (pf_strlen((char *)src) + dest_len);
}

char	*pf_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	len1;
	size_t	len2;

	if (s1 == 0 || s2 == 0)
		return (0);
	len1 = pf_strlen((char *)s1);
	len2 = pf_strlen((char *)s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concat)
		return (NULL);
	pf_strlcpy(concat, s1, len1 + 1);
	pf_strlcat(concat, s2, len1 + len2 + 1);
	return (concat);
}
