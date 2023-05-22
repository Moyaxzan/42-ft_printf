/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:16:28 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/12 13:01:12 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	write_conversion(const char *format, va_list args)
{
	//what if % est le dernier char ?
	if (*format == '%')
		return (write(1, "%", 1));
	if (*format == 'c')
		return (ft_putchar((char) va_arg(args, int)));
	if (*format == 's')
		return (ft_putstr((char *) va_arg(args, char *)));
	if (*format == 'd' || *format == 'i')
		return (putnbr_base(va_arg(args, int), BASE_10));
	if (*format == 'x')
		return (putnbr_base(va_arg(args, int), BASE_L16));
	if (*format == 'X')
		return (putnbr_base(va_arg(args, int), BASE_U16));
	if (*format == 'p')
		return (print_pointer(va_arg(args, unsigned long))); 
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		nb_char_written;

	if (!format)
		return (0);
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
		format++;
	}
	va_end(args);
	return (nb_char_written);
}
