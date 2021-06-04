/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 22:21:47 by jdufour           #+#    #+#             */
/*   Updated: 2021/06/04 17:50:14 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <sys/types.h>

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	uint8_t	*p1;
	uint8_t	*p2;

	if (!n || s1 == s2)
		return (0);
	p1 = (uint8_t *)s1;
	p2 = (uint8_t *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		++p1;
		++p2;
	}
	return (0);
}
