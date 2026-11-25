/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:32:38 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/29 07:12:31 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (num != 0 && size > (size_t)-1 / num)
		return (NULL);
	total_size = num * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, total_size);
	}
	return (ptr);
}
