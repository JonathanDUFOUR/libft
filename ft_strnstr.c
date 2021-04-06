/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:11:06 by jdufour           #+#    #+#             */
/*   Updated: 2021/04/06 19:35:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_strnstr(char *str, const char *to_find, size_t n)
{
	size_t		to_find_len;
	char		*p1;
	char const	*p2;

	if (!*to_find)
		return (str);
	to_find_len = ft_strlen(to_find);
	if (!*str || n < to_find_len)
		return (NULL);
	while (*str && (n >= to_find_len))
	{
		p1 = str;
		p2 = to_find;
		while (*p1 && *p2 && *p1 == *p2)
		{
			++p1;
			++p2;
		}
		if (!*p2)
			return (str);
		--n;
		++str;
	}
	return (NULL);
}
