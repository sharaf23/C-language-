/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 06:51:51 by sallawne          #+#    #+#             */
/*   Updated: 2026/10/12 10:46:17 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_;
	char	*join;
	size_t	s2_;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s1_ = ft_strlen((char *)s1);
	s2_ = ft_strlen((char *)s2);
	join = (char *)malloc(sizeof(char) * (s1_ + s2_ + 1));
	if (!join)
		return (NULL);
	i = -1;
	while (s1_ > ++i)
		join[i] = s1[i];
	j = -1;
	while (s2_ > ++j)
		join[i + j] = s2[j];
	join[i + j] = '\0';
	return (join);
}
