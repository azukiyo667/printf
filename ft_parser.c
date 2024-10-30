/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:03:56 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/29 14:03:56 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(const char *format, va_list ap)
{
	int	c;

	c = 0;
	if (*format == '%' && *(format + 1) == 'c')
		c += handle_char(ap);
	if (*format == '%' && *(format + 1) == 's')
		c += handle_str(ap);
	if (*format == '%' && *(format + 1) == 'p')
		c += handle_memory(ap);
	if (*format == '%' && *(format + 1) == 'd')
		c += handle_decimal(ap);
	if (*format == '%' && *(format + 1) == 'i')
		c += handle_decimal(ap);
	if (*format == '%' && *(format + 1) == 'u')
		c += handle_udecimal(ap);
	if (*format == '%' && *(format + 1) == 'x')
		c += handle_hexa(format, ap);
	if (*format == '%' && *(format + 1) == 'X')
		c += handle_hexa(format, ap);
	if (*format == '%' && *(format + 1) == '%')
		c += handle_percent();
	return (c);
}
