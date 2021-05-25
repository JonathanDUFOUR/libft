/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:07:46 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/30 23:32:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (src == dst)
		return (dst);
	if (src < dst)
		return (ft_memcpy(dst, src, n));
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		++i;
	}
	return (dst);
}
