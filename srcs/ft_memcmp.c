/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 22:21:47 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 01:38:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <sys/types.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	uint8_t const	*s1_cpy = (uint8_t *)s1;
	uint8_t const	*s2_cpy = (uint8_t *)s2;

	if (!n || s1 == s2)
		return (0);
	while (n--)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		++s1_cpy;
		++s2_cpy;
	}
	return (0);
}
