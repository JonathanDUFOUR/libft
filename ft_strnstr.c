/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:11:06 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/05 00:16:16 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_strnstr(char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return (str);
	if (n < ft_strlen(to_find))
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while ((i + j) < n &&
				str[i + j] &&
				to_find[j] &&
				to_find[j] == str[i + j])
			++j;
		if (!to_find[j])
			return (str + i);
		++i;
	}
	return (NULL);
}
