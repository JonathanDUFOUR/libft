/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:55:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/20 13:06:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*p = s;

	if (!c)
		return (((char *)s) + ft_strlen(s));
	p += ft_strlen(s);
	while (p >= s)
	{
		if (*p == (char)c)
			return ((char *)p);
		--p;
	}
	return (NULL);
}
