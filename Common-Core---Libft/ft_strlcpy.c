/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:52:23 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/28 06:33:51 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dis, const char *src, size_t len)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (len == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < len - 1)
	{
		dis[i] = src[i];
		i++;
	}
	dis[i] = '\0';
	return (src_len);
}
