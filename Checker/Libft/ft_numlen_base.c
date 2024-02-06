/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:24:13 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 10:30:53 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen_base(int n, char *base)
{
	int		count;
	int		base_len;
	long	nb;

	nb = n;
	base_len = ft_strlen(base);
	count = 1;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb >= base_len)
	{
		count++;
		nb /= base_len;
	}
	return (count);
}
