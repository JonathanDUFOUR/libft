/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:04:31 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/30 23:28:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d_cpy;
	unsigned char	*s_cpy;

	d_cpy = (unsigned char *)dest;
	s_cpy = (unsigned char *)src;
	while (n--)
	{
		*d_cpy++ = *s_cpy;
		if (*s_cpy++ == (unsigned char)c)
			return (d_cpy);
	}
	return (NULL);
}
