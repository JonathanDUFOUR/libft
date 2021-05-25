/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_byte.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 00:12:55 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/05 06:34:22 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

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
