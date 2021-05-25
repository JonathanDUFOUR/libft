/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:56 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 02:10:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_base(uint32_t nbr, const char *base)
{
	size_t	bs;
	char	d;

	if (ft_wrong_base(base))
		return ;
	bs = ft_strlen(base);
	if (nbr >= bs)
		ft_putnbr_base(nbr / bs, base);
	d = base[nbr % bs];
	write(1, &d, 1);
}
