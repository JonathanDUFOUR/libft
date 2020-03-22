/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 18:55:17 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 22:10:13 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

#ifndef NULL
# define NULL 0
#endif

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *) s)[i] != c)
		++i;
	return (((char *) s)[i] == c ? &((char *) s)[i] : NULL);
}
