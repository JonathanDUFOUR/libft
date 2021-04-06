/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:39 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/06 19:05:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (--size && *src)
	{
		*dst++ = *src++;
	}
	*dst = 0;
	return (src_len);
}
