/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchevall <bchevall@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:01:41 by bchevall          #+#    #+#             */
/*   Updated: 2024/10/29 14:02:14 by bchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static int	ft_getdec(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while ((n / 10) != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}

int	handle_decimal(va_list ap)
{
	int	num;

	num = va_arg(ap, int);
	ft_putnbr_fd(num, 1);
	if (num < 0)
		return (ft_getdec(num) + 1);
	else
		return (ft_getdec(num));
}
