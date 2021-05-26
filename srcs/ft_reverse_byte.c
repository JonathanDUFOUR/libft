/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_byte.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 00:12:55 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 23:39:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

void	ft_reverse_byte(uint32_t *addr, uint32_t idx)
{
	uint32_t	i;

	if (!addr)
		return ;
	idx %= 4;
	i = 0;
	while (i < 4)
	{
		ft_swap_bits(addr, i + idx * 8, 7 - i + idx * 8);
		++i;
	}
}
