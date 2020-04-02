/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:14:24 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/01 15:04:53 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <inttypes.h>

void	ft_bzero(void *s, size_t n)
{
	register char	*p;

	p = s;
	while (n >= sizeof(uint64_t))
	{
		*((uint64_t *)p) = 0;
		p += sizeof(uint64_t);
		n -= sizeof(uint64_t);
	}
	if (n >= sizeof(uint32_t))
	{
		*((uint32_t *)p) = 0;
		p += sizeof(uint32_t);
		n -= sizeof(uint32_t);
	}
	if (n >= sizeof(uint16_t))
	{
		*((uint16_t *)p) = 0;
		p += sizeof(uint16_t);
		n -= sizeof(uint16_t);
	}
	if (n)
		*p = 0;
}
