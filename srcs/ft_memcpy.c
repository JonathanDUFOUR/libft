/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:57:51 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 23:33:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	if (!dst || !src)
		return (NULL);
	else if (dst != src)
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
