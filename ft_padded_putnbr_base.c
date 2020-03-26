/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padded_putnbr_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 03:36:00 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 18:28:05 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include "libft.h"

void	ft_padded_putnbr_base(u_int32_t nbr, const char *base, u_int8_t len)
{
	size_t			bs;
	char			d;

	if (ft_wrong_base(base))
		return ;
	bs = ft_strlen(base);
	if (nbr >= bs || --len)
		ft_padded_putnbr_base(nbr / bs, base, len);
	d = base[nbr % bs];
	write(1, &d, 1);
}
