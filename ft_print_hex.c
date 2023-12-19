/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-hss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:02:35 by aben-hss          #+#    #+#             */
/*   Updated: 2023/12/08 22:03:13 by aben-hss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long nb, char format)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		count += print_hex(nb / 16, format);
		count += print_hex(nb % 16, format);
	}
	else if (format == 'X')
		count += ft_putchar(ft_toupper(base[nb]));
	else
		count += ft_putchar(base[nb]);
	return (count);
}
