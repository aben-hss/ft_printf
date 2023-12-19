/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-hss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:06:59 by aben-hss          #+#    #+#             */
/*   Updated: 2023/12/08 22:09:54 by aben-hss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_toupper(char c);
int	print_hex(unsigned long nb, char format);
int	ft_putnbr(long nb);
int	ft_format(va_list ap, char c);
int	ft_printf(const char *str, ...);
#endif
