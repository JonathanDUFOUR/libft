/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:37 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 01:48:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

void	ft_putnbr(int n)
{
	uint32_t	abs;
	char		d;

	abs = n;
	if (n < 0)
	{
		write(1, "-", 1);
		abs = -n;
	}
	if (abs > 9)
		ft_putnbr(abs / 10);
	d = abs % 10 + '0';
	write(1, &d, 1);
}
