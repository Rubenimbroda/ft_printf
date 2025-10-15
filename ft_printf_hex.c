/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:42:02 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/10/15 14:43:47 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned long n)
{
	char	*hex;
	int		len;

	len = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		len += ft_puthex_low(n / 16);
	ft_putchar(hex[n % 16]);
	len++;
	return (len);
}

int	ft_puthex_upper(unsigned long n)
{
	char	*hex;
	int		len;

	len = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_puthex_upper(n / 16);
	ft_putchar(hex[n % 16]);
	len++;
	return (len);
}
