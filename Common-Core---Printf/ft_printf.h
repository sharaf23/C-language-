/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 07:06:46 by sallawne          #+#    #+#             */
/*   Updated: 2026/10/07 07:46:35 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_nbr(int i);
int	ft_print_ptr(long long unsigned p);
int	ft_print_hexadecimal(unsigned int num, char format);
int	ft_print_unsigned(unsigned int n);

#endif
