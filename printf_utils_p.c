/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:48:06 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/12 12:14:29 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long add_int)
{
	char	addr[17];
	int		i;
	int		nb_char;

	i = 0;
	ft_putchar('0');
	ft_putchar('x');
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
