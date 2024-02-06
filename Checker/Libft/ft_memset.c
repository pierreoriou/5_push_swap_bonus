/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:54:37 by poriou            #+#    #+#             */
/*   Updated: 2023/11/16 17:54:49 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	ptr_c;
	size_t			i;

	ptr_s = (unsigned char *)s;
	ptr_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = ptr_c;
		i++;
	}
	return (s);
}
