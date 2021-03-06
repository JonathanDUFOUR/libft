/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:24:35 by jonathan          #+#    #+#             */
/*   Updated: 2021/03/06 17:18:30 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_find_next_prime(int n)
{
	unsigned int	next_prime;

	if (n < 2)
		return (2);
	else
	{
		if (ft_isprime(n))
			return (n);
		next_prime = n;
		if (!(next_prime % 2))
			++next_prime;
		else
			next_prime += 2;
		while (!ft_isprime(next_prime))
			next_prime += 2;
		return (next_prime);
	}
}
