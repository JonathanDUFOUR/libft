/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:14:24 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 22:46:41 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <inttypes.h>

void ft_bzero(void *s, size_t n)
{
	while (n >= sizeof(uint64_t))
	{
		*((uint64_t *)s++) = 0;
		n -= sizeof(uint64_t);
	}
	if (n >= sizeof(uint32_t))
	{
		*((uint32_t *)s++) = 0;
		n -= sizeof(uint32_t);
	}
	if (n >= sizeof(uint16_t))
	{
		*((uint16_t *)s++) = 0;
		n -= sizeof(uint16_t);
	}
	if (n)
		*((uint8_t *)s) = 0;
}
