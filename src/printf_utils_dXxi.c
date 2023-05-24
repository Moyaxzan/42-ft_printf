/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils_dXxi.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:33:52 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/24 18:17:17 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	if (!str)
		return (ft_putstr("(null)"));
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s2 && *s1 && *s1 == *s2 && n)
	{
		s2++;
		s1++;
		n--;
	}
	if (!n)
		return (0);
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

int	putnbr_decimal(int nbr)
{
	int		nb_char_written;
	int		len_nb;
	long	nb;

	nb = nbr;
	len_nb = 0;
	nb_char_written = 0;
	if (!nbr)
		return (write(1, "0", 1));
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		nb_char_written++;
	}
	while (nbr)
		nbr = nbr / 10 + 0 * len_nb++;
	nb_char_written += len_nb;
	while (len_nb--)
		ft_putchar((nb / power(10, len_nb) % 10) + '0');
	return (nb_char_written);
}
