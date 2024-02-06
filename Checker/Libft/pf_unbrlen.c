/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_unbrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:28:48 by poriou            #+#    #+#             */
/*   Updated: 2024/01/20 16:30:31 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pf_unbrlen(long unsigned int n, char *base)
{
	int	len;

	len = 1;
	while (n >= ft_strlen(base))
	{
		n /= ft_strlen(base);
		len++;
	}
	return (len);
}
