/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:16:28 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/07/24 14:28:50 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>

int	write_conversion(const char *format, va_list args)
{
	if (!(*format))
		return (0);
	if (*format == '%')
		return (write(1, "%", 1));
	if (*format == 'c')
		return (ft_putchar((char) va_arg(args, int)));
	if (*format == 's')
		return (ft_putstr((char *) va_arg(args, char *)));
	if (*format == 'd' || *format == 'i')
		return (putnbr_decimal(va_arg(args, int)));
	if (*format == 'x')
		return (print_hex(va_arg(args, unsigned long), BASE_L16));
	if (*format == 'X')
		return (print_hex(va_arg(args, unsigned long), BASE_U16));
	if (*format == 'p')
		return (print_pointer(va_arg(args, unsigned long)));
	if (*format == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	return (write(1, format, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		nb_char_written;

	if (!format)
		return (-1);
	va_start(args, format);
	nb_char_written = 0;
	while (*format)
	{
		if (*format == '%')
			nb_char_written += write_conversion(++format, args);
		else
		{
			write(1, format, 1);
			nb_char_written++;
		}
		if (*format)
			format++;
	}
	va_end(args);
	return (nb_char_written);
}
