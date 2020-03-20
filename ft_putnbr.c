/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:48:49 by jojo              #+#    #+#             */
/*   Updated: 2020/03/20 17:09:49 by jojo             ###   ########.fr       */
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
