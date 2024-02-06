/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:47 by poriou            #+#    #+#             */
/*   Updated: 2023/11/16 17:59:00 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	if ((dst == 0 || src == 0) && size == 0)
		return (0);
	dest_len = ft_strlen(dst);
	i = 0;
	if (size <= dest_len || !size)
		return (ft_strlen(src) + size);
	while (src[i] && dest_len + i < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (ft_strlen(src) + dest_len);
}
