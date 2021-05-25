/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:37:26 by jonathan          #+#    #+#             */
/*   Updated: 2021/05/10 02:09:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

void	ft_putlnbr(int64_t n)
{
	uint64_t	abs;
	char		d;

	abs = n;
	if (n < 0)
	{
		abs = -n;
		write(1, "-", 1);
	}
	if (abs > 9)
		ft_putlnbr(abs / 10);
	d = abs % 10 + '0';
	write(1, &d, 1);
}
