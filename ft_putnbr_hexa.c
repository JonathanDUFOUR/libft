/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 05:56:13 by jodufour          #+#    #+#             */
/*   Updated: 2021/05/18 05:58:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>

void	ft_putnbr_hexa(uint32_t n, int c)
{
	uint32_t	mod;
	char		d;

	if (n > 15)
		ft_putnbr_hexa(n / 16, c);
	mod = n % 16;
	if (mod < 10)
		d = mod + '0';
	else
		d = mod - 10 + c;
	write(1, &d, 1);
}
