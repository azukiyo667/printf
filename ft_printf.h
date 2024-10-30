/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:01:41 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/29 14:02:44 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...) __attribute__((format(printf, 1, 2)));
int	ft_parser(const char *format, va_list ap);

int	handle_str(va_list ap);
int	handle_decimal(va_list ap);
int	handle_hexa(const char *format, va_list ap);
int	handle_udecimal(va_list ap);
int	handle_memory(va_list ap);
int	handle_char(va_list ap);
int	handle_percent(void);

#endif