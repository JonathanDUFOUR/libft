/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 06:29:27 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 02:54:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

void	ft_swap_bits(uint32_t *addr, uint32_t idx1, uint32_t idx2)
{
	idx1 %= 32;
	idx2 %= 32;
	if ((*addr >> idx1 & 1U) != (*addr >> idx2 & 1U))
	{
		*addr ^= 1U << idx1;
		*addr ^= 1U << idx2;
	}
}
