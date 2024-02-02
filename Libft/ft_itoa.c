/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:25:29 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 09:59:55 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb;
	int			len;
	int			i;
	char		*result;

	len = ft_numlen(n);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	nb = n;
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	i = 1;
	result[len] = '\0';
	while (nb >= 10)
	{
		result[len - i] = nb % 10 + 48;
		nb /= 10;
		i++;
	}
	result[len - i] = nb % 10 + 48;
	return (result);
}
