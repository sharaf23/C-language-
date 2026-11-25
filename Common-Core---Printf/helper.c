/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 07:09:57 by sallawne          #+#    #+#             */
/*   Updated: 2026/10/05 09:01:31 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
	{
		if (ft_print_char('(') == -1 || ft_print_char('n') == -1
			|| ft_print_char('u') == -1 || ft_print_char('l') == -1
			|| ft_print_char('l') == -1 || ft_print_char(')') == -1)
			return (-1);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		if (ft_print_char(s[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_print_nbr(int i)
{
	int		len;
	long	s;
	int		temp;

	s = i;
	len = 0;
	if (s < 0)
	{
		if (ft_print_char('-') == -1)
			return (-1);
		len++;
		s = -s;
	}
	if (s >= 10)
	{
		temp = ft_print_nbr(s / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_print_char((s % 10) + '0');
	if (temp == -1)
		return (-1);
	return (len + temp);
}

static int	ft_puthex_ptr(unsigned long long n)
{
	int	count;
	int	temp;
	int	digit;

	count = 0;
	if (n >= 16)
	{
		temp = ft_puthex_ptr(n / 16);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	digit = n % 16;
	if (digit < 10)
		temp = ft_print_char('0' + digit);
	else
		temp = ft_print_char('a' + digit - 10);
	if (temp == -1)
		return (-1);
	return (count + temp);
}

int	ft_print_ptr(unsigned long long p)
{
	int	temp;

	if (!p)
	{
		if (ft_print_char('(') == -1 || ft_print_char('n') == -1
			|| ft_print_char('i') == -1 || ft_print_char('l') == -1
			|| ft_print_char(')') == -1)
			return (-1);
		return (5);
	}
	if (ft_print_char('0') == -1 || ft_print_char('x') == -1)
		return (-1);
	temp = ft_puthex_ptr(p);
	if (temp == -1)
		return (-1);
	return (2 + temp);
}

int	ft_print_unsigned(unsigned int n)
{
	int	len;
	int	temp;

	len = 0;
	if (n >= 10)
	{
		temp = ft_print_unsigned(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_print_char((n % 10) + '0');
	if (temp == -1)
		return (-1);
	return (len + temp);
}
