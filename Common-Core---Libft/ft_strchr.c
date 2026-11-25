/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:58:43 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/20 10:13:31 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	while (*src != '\0')
	{
		if (*src == (char)c)
		{
			return ((char *)src);
		}
		src++;
	}
	if (*src == (char)c)
	{
		return ((char *)src);
	}
	return (NULL);
}
