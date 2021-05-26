/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_all_bytes.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 07:11:44 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 23:36:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

void	ft_reverse_all_bytes(uint32_t *addr)
{
	uint32_t	i;

	if (!addr)
		return ;
	i = 0;
	while (i < 16)
	{
		ft_swap_bits(addr, i, 31 - i);
		++i;
	}
}
