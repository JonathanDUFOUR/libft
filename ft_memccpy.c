/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:04:31 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 19:04:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d_cpy;
	char	*s_cpy;

	d_cpy = (char *)dest;
	s_cpy = (char *)src;
	while (n--)
	{
		*d_cpy++ = *s_cpy++;
		if (*d_cpy == c)
			return (d_cpy);
	}
	return (NULL);
}
