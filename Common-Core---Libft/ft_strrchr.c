/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 06:21:36 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/14 06:51:21 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	s = s + len;
	while (len >= 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		len--;
		s--;
	}
	return (NULL);
}
