/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 02:28:28 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 02:33:18 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int    i;  
	unsigned int    d_len;

	i = 0;
	while (i < size)
	{   
		if (!dest[i])
		{
			i = 0;
			d_len = ft_strlen(dest);
			while (src[i] && i < (size - d_len) - 1)
			{
				dest[d_len + i] = src[i];
				++i;
			}
			dest[d_len + i] = 0;
			return (d_len + ft_strlen(src));
		}
		++i;
	}   
	return (size + ft_strlen(src));
}
