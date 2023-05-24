/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils_pcu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:48:06 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/24 19:03:01 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	print_pointer(unsigned long add_int)
{
	char	addr[17];
	int		i;
	int		nb_char;

	i = 0;
	if (!add_int)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	while (add_int)
	{
		addr[i] = BASE_L16[add_int % 16];
		add_int = add_int / 16;
		i++;
	}
	nb_char = i + 2;
	while (i--)
	{
		write(1, &addr[i], 1);
	}
	return (nb_char);
}

int	print_hex(unsigned long hex, char *base)
{
	int		nb_char_written;
	int		len_nb;
	char	res[20];

	len_nb = 0;
	if (!hex)
		return (write(1, "0", 1));
	while (hex)
	{
		res[len_nb] = base[hex % 16];
		hex = hex / 16;
		len_nb++;
	}
	nb_char_written = len_nb;
	while (len_nb < 20)
	{
		res[len_nb] = '\0';
		len_nb++;
	}
	len_nb = nb_char_written;
	while (len_nb--)
		ft_putchar(res[len_nb]);
	return (nb_char_written);
}

int	print_unsigned(unsigned int u_nb)
{
	int				nb_char_written;
	unsigned int	nbr;
	size_t			len_nb;

	len_nb = 0;
	nbr = u_nb;
	if (!u_nb)
		return (write(1, "0", 1));
	while (u_nb)
	{
		u_nb = u_nb / 10;
		len_nb++;
	}
	u_nb = nbr;
	nb_char_written = len_nb;
	while (len_nb--)
		ft_putchar(BASE_10[(u_nb / power(10, len_nb) % 10)]);
	return (nb_char_written);
}
