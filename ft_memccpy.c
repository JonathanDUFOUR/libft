/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:04:31 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 07:31:57 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

#ifndef NULL
# define NULL 0
#endif

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d_cpy;
	char	*s_cpy;

	d_cpy = (char *) dest;
	s_cpy = (char *) src;
	while (n--)
		if ((*d_cpy++ = *s_cpy++) == c)
			return (d_cpy);
	return (NULL);
}
