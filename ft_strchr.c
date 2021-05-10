/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:20:35 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 01:57:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!c)
		return (((char *)s) + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (NULL);
}
