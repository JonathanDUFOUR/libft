/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:55:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/05 00:34:44 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!c)
		return (((char *)s) + ft_strlen(s));
	i = ft_strlen(s);
	while (i--)
		if (s[i] == c)
			return (((char *)s) + i);
	return (NULL);
}
