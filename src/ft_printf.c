/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:16:28 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/07/25 12:29:32 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>

int	write_conversion(const char *format, va_list args)
{
	if (!(format[1]))
		return (-1);
	if (format[1] == '%')
		return (write(1, "%", 1));
	if (format[1] == 'c')
		return (ft_putchar((char) va_arg(args, int)));
	if (format[1] == 's')
		return (ft_putstr((char *) va_arg(args, char *)));
	if (format[1] == 'd' || format[1] == 'i')
		return (putnbr_decimal(va_arg(args, int)));
	if (format[1] == 'x')
		return (print_hex(va_arg(args, unsigned long), BASE_L16));
	if (format[1] == 'X')
		return (print_hex(va_arg(args, unsigned long), BASE_U16));
	if (format[1] == 'p')
		return (print_pointer(va_arg(args, unsigned long)));
	if (format[1] == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	return (write(1, format, 2));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		nb_char_written;
	int		conv;

	if (!format)
		return (-1);
	va_start(args, format);
	nb_char_written = 0;
	conv = 0;
	while (*format)
	{
		if (*format == '%')
		{
			conv = write_conversion(format++, args);
			if (conv == -1)
				return (-1);
			nb_char_written += conv;
		}
		else
			nb_char_written += write(1, format, 1);
		if (*format)
			format++;
	}
	va_end(args);
	return (nb_char_written);
}
