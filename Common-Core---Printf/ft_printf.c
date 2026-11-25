/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 07:05:04 by sallawne          #+#    #+#             */
/*   Updated: 2026/10/07 11:55:24 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	dis(int c)
{
	int	temp;
	int	len;

	len = 0;
	temp = 0;
	temp = ft_print_char('%');
	if (temp == -1)
		return (-1);
	if (c != '\0')
	{
		len = ft_print_char(c);
		if (len == -1)
			return (-1);
	}
	return (len + temp);
}

static int	ft_format(va_list arg, char const format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(arg, int));
	else if (format == 's')
		len += ft_print_str(va_arg(arg, char *));
	else if (format == 'd')
		len += ft_print_nbr(va_arg(arg, int));
	else if (format == 'i')
		len += ft_print_nbr(va_arg(arg, int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hexadecimal(va_arg(arg, unsigned int), format);
	else if (format == 'p')
		len += ft_print_ptr(va_arg(arg, long long unsigned));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (format == '%')
		len += ft_print_char('%');
	else
		len += dis(format);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	arg;
	int		i;
	int		temp;

	i = 0;
	len = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			temp = ft_format(arg, format[i + 1]);
		else
			temp = ft_print_char((int)format[i]);
		if (temp == -1)
			return (-1);
		len += temp;
		i += 1 + (format[i] == '%' && format[i + 1] != '\0');
	}
	va_end(arg);
	return (len);
}
