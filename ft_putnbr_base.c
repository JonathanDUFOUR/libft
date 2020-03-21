/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:56 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:25:11 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	abs;
	unsigned int	bs;
	int				sign;
	char			d;

	if (ft_wrong_base(base))
		return ;
	abs = (nbr < 0 ? -nbr : nbr);
	sign = (nbr < 0 ? 1 : 0);
	bs = ft_strlen(base);
	if (sign)
		write(1, "-", 1);
	if (abs >= bs)
		ft_putnbr_base(abs / bs, base);
	d = base[abs % bs];
	write(1, &d, 1);
}
