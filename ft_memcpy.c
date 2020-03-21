/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:57:51 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 07:02:02 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		((char *) dest)[n] = ((char *) src)[n];
	return (dest);
}
