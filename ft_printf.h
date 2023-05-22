/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:23:41 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/12 12:30:04 by tsaint-p         ###   ########.fr       */
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
int	putnbr_base(int nbr, char *base);
int	ft_atoi(const char *nptr);
int	print_pointer(unsigned long add_int);

#endif


