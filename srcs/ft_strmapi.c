/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 19:29:08 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 00:08:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	char			*p;

	if (!s || !f)
		return (NULL);
	map = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!map)
		return (NULL);
	p = map;
	while (*s)
	{
		*p = (*f)((p - map), *s++);
		++p;
	}
	return (map);
}
