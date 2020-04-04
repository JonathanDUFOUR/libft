/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_byte.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 00:12:55 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/04 02:04:27 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

void	ft_swap_bits(uint32_t *ptr, uint32_t idx1, uint32_t idx2)
{
	idx1 %= 32;
	idx2 %= 32;
	if ((*ptr >> idx1 & 1U) != (*ptr >> idx2 & 1U))
	{
		*ptr ^= 1U << idx1;
		*ptr ^= 1U << idx2;
	}
}

void	ft_reverse_byte(uint32_t *ptr, uint32_t idx)
{
	uint32_t	i;

	idx %= 4;
	i = 0;
	while (i < 4)
	{
		ft_swap_bits(ptr, i + idx * 8, 7 - i + idx * 8);
		++i;
	}
}
