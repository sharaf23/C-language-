/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:39:26 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/29 06:54:42 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dis, void const *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dis;
	s = (unsigned char *)src;
	if (!dis || !src)
	{
		return (NULL);
	}
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dis);
}
