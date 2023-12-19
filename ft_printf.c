/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-hss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:05:56 by aben-hss          #+#    #+#             */
/*   Updated: 2023/12/08 22:06:43 by aben-hss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count += ft_putnbr(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += print_hex(va_arg(ap, unsigned long), c);
	}
	else if (c == 'x' || c == 'X')
		count += print_hex(va_arg(ap, unsigned int ), c);
	else if (c == '%')
		count += ft_putchar(c);
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			count += ft_format(ap, *(++str));
		}
		else if (*str != '%' && *str)
			count += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (count);
}
