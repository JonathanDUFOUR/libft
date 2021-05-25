/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:14:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 22:46:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <inttypes.h>

void	ft_bzero(void *s, size_t n)
{
	register char	*p;

	if (!s)
		return ;
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
