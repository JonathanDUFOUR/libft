/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:37 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:24:39 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	unsigned int	abs;
	int				sign;
	char			d;

	abs = (nbr < 0 ? -nbr : nbr);
	sign = (nbr < 0 ? 1 : 0);
	if (sign)
		write(1, "-", 1);
	if (abs > 9)
		ft_putnbr(abs / 10);
	d = abs % 10 + 48;
	write(1, &d, 1);
	return ;
}
