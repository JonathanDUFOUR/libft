/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_bits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 03:01:12 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 03:51:43 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_int_bits(unsigned int nbr)
{
	char	i;

	i = 4;
	while (i--)
	{
		ft_padded_putnbr_base((nbr >> 8 * i) & 0xFF, "01", 8);
		if (i)
			ft_putchar(' ');
	}
}
