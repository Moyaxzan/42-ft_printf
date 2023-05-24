/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:23:41 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/24 18:14:24 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE_10 "0123456789"
# define BASE_U16 "0123456789ABCDEF"
# define BASE_L16 "0123456789abcdef"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	putnbr_decimal(int nbr);
int	ft_atoi(const char *nptr);
int	print_pointer(unsigned long add_int);
int	power(int nb, int pow);
int	print_unsigned(unsigned int u_nb);
int	print_hex(unsigned long hex, char *base);

#endif
