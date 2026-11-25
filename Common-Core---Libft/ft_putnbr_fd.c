/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:02:50 by sallawne          #+#    #+#             */
/*   Updated: 2026/09/21 10:33:56 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	s;

	s = n;
	if (s < 0)
	{
		put('-', fd);
		s *= -1;
	}
	if (s < 10)
	{
		put(s + '0', fd);
		return ;
	}
	if (s >= 10)
	{
		ft_putnbr_fd(s / 10, fd);
	}
	put(s % 10 + '0', fd);
}
