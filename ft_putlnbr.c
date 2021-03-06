/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <jojo19.duf@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:37:26 by jonathan          #+#    #+#             */
/*   Updated: 2021/03/06 17:39:41 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlnbr(long n)
{
	unsigned long	abs;
	char			d;

	abs = n;
	if (n < 0)
	{
		abs = -n;
		ft_putchar('-');
	}
	if (abs > 9)
		ft_putlnbr(abs / 10);
	d = abs % 10 + '0';
	ft_putchar(d);
}
