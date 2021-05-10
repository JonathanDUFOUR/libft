/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:29:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 02:05:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p;

	p = dest;
	while (*p)
		++p;
	while (n-- && *src)
		*p++ = *src++;
	*p = 0;
	return (dest);
}
