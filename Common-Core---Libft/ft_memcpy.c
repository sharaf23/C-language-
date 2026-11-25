/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:10:46 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/28 06:27:28 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dis, void const *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dis;
	s = (unsigned char *)src;
	if (dis == NULL && src == NULL)
	{
		return (NULL);
	}
	while (len > 0)
	{
		*d = *s;
		s++;
		d++;
		len--;
	}
	return (dis);
}
