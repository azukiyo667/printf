/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:01:41 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/29 14:02:39 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		c;

	c = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			c += ft_parser(format, args);
			format += 2;
		}
		else
		{
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			format++;
			c++;
		}
	}
	va_end(args);
	return (c);
}
