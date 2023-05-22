/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils_dXxi.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:33:52 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/12 13:07:04 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str)
	{
		write(1, str++, 1);
		cpt++;
	}
	return (cpt);
}

int	power(int nb, int pow)
{
	int	res;

	res = 1;
	while (pow--)
		res *= nb;
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	putnbr_base(int nbr, char *base)
{
	int		len_base;
	int		nb_char_written;
	int		len_nb;
	long	nb;

	nb = nbr;
	len_base = ft_strlen(base);
	len_nb = 0;
	nb_char_written = 0;
	while (nb)
	{
		nb = nb / len_base;
		len_nb++;
	}
	nb = nbr;
	nb_char_written = len_nb;
	while (len_nb--)
		ft_putchar(base[(nb / power(len_base, len_nb) % len_base)]);
	return (nb_char_written);
}
