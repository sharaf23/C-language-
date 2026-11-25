/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 07:15:05 by sallawne          #+#    #+#             */
/*   Updated: 2026/10/05 08:44:58 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(unsigned int n, char format)
{
	int	count;
	int	temp;
	int	digit;

	count = 0;
	if (n >= 16)
	{
		temp = ft_print_hexadecimal(n / 16, format);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	digit = n % 16;
	if (digit < 10)
		digit += '0';
	else if (format == 'X')
		digit += 'A' - 10;
	else
		digit += 'a' - 10;
	temp = ft_print_char(digit);
	if (temp == -1)
		return (-1);
	return (count + temp);
}

int	ft_print_char(int c)
{
	int	temp;

	temp = write(1, &c, 1);
	if (temp == -1)
		return (-1);
	return (1);
}
