/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 08:51:34 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/28 08:16:45 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
