/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:11:43 by jonathan          #+#    #+#             */
/*   Updated: 2021/03/30 20:35:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(uint32_t n)
{
	uint32_t	i;

	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
		return (TRUE);
	if (n < 2 || !(n % 2) || !(n % 3) || !(n % 5) || !(n % 7) || !(n % 11))
		return (FALSE);
	i = 13;
	while (i < (n / 10))
	{
		if (!(n % i))
			return (FALSE);
		i += 2;
	}
	return (TRUE);
}
