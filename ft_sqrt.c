/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:45:47 by jojo              #+#    #+#             */
/*   Updated: 2020/03/19 05:02:34 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "primes.h"

int	ft_sqrt(int nb)
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

/*
** Lolilol hahaha
*/
