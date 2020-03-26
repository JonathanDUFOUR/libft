/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:25:59 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 18:28:57 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "primes.h"

int	ft_sqrt(u_int32_t nb)
{
	int	i;

	if (nb < 4)
		return (nb == 1);
	i = PRIME_COUNT - 1;
	while (g_primes[i] * g_primes[i] > nb)
		--i;
	while (i >= 0)
	{
		if (nb % (g_primes[i] * g_primes[i]) == 0)
			return (g_primes[i] * ft_sqrt(nb / (g_primes[i] * g_primes[i])));
		--i;
	}
	return (0);
}
