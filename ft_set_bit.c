/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_bit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 11:42:51 by jdufour           #+#    #+#             */
/*   Updated: 2021/04/10 13:00:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include <stdlib.h>
#include <sys/types.h>

void	*ft_set_bit(void *addr, size_t size, size_t idx)
{
	if (!addr || (idx >= (size * 8)))
		return (NULL);
	*((unsigned char *)addr + (idx / 8)) |= (1 << (idx % 8));
	return (addr);
}
