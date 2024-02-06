/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:44:10 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 11:16:40 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, char *base)
{
	int		i;
	long	nb;
	char	*result;

	if (!ft_check_base(base))
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_numlen_base(n, base) + 1));
	if (!result)
		return (NULL);
	nb = n;
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	result[ft_numlen_base(n, base)] = '\0';
	i = ft_numlen_base(n, base) - 1;
	while (nb >= (int)ft_strlen(base))
	{
		result[i] = base[nb % ft_strlen(base)];
		nb /= ft_strlen(base);
		i--;
	}
	result[i] = base[nb % ft_strlen(base)];
	return (result);
}
