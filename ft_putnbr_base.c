/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:56 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 17:27:11 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	abs;
	size_t			bs;
	char			sign;
	char			d;

	if (ft_wrong_base(base))
		return ;
	sign = (nbr < 0 ? 'n' : 'p');
	abs = (sign == 'n' ? -nbr : nbr);
	bs = ft_strlen(base);
	if (sign == 'n')
		write(1, "-", 1);
	if (abs >= bs)
		ft_putnbr_base(abs / bs, base);
	d = base[abs % bs];
	write(1, &d, 1);
}
