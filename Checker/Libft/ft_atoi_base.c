/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:31:17 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 11:15:12 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_indexofbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nb, char *base)
{
	int	base_len;
	int	i;
	int	result;
	int	sign;

	if (!ft_check_base(base))
		return (-1);
	base_len = ft_strlen(base);
	result = 0;
	sign = 1;
	i = 0;
	while (nb[i] == 32 || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_ischarset(nb[i], base))
	{
		result = result * base_len + (ft_indexofbase(nb[i], base));
		i++;
	}
	return (result * sign);
}
