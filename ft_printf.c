/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:51:41 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/10/16 12:05:40 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	especifier(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_puthex_low(va_arg(args, unsigned int));
	else if (c == 'X')
		len += ft_puthex_upper(va_arg(args, unsigned int));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += especifier(args, format[i]);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
