/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padded_putnbr_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 03:36:00 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/29 00:17:02 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <inttypes.h>
#include <unistd.h>
#include "libft.h"

void	ft_padded_putnbr_base(uint32_t nbr, const char *base, uint8_t len)
{
	size_t			bs;
	char			d;

	if (ft_wrong_base(base))
		return ;
	bs = ft_strlen(base);
	d = base[nbr % bs];
	if (--len || nbr >= bs)
		ft_padded_putnbr_base(nbr / bs, base, len);
	write(1, &d, 1);
}
