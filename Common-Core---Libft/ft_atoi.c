/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:40:03 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/29 07:40:46 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	i;
	int	sign;
	int	reaslt;

	i = 0;
	sign = 1;
	reaslt = 0;
	while ((c[i] == ' ') || (c[i] >= 9 && c[i] <= 13))
	{
		i++;
	}
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		reaslt = (reaslt * 10) + (c[i] - '0');
		i++;
	}
	return (reaslt * sign);
}
