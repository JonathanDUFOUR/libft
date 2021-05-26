/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 22:21:47 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 23:27:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <sys/types.h>

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	if (!n || s1 == s2)
		return (0);
	while (n--)
	{
		if (*(uint8_t *)s1 != *(uint8_t *)s2)
			return (*(uint8_t *)s1 - *(uint8_t *)s2);
		(uint8_t *)++s1;
		(uint8_t *)++s2;
	}
	return (0);
}
