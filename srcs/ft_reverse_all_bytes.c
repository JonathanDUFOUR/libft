/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_all_bytes.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 07:11:44 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/05 07:16:18 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

void	ft_reverse_all_bytes(uint32_t *ptr)
{
	uint32_t	i;

	i = 0;
	while (i < 16)
	{
		ft_swap_bits(ptr, i, 31 - i);
		++i;
	}
}
