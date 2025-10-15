/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:37 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/10/15 16:28:26 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	add;
	int				len;

	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	add = (unsigned long)ptr;
	ft_putstr("0x");
	len = 2;
	len += ft_puthex_low(add);
	return (len);
}
