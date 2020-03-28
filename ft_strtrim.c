/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 23:11:11 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/28 23:42:20 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*output;
	size_t	o_len;

	o_len = ft_strlen(s);
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
	{
		--o_len;
		++s;
	}
	if (!*s)
		return ("");
	s += o_len - 1;
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
	{
		--o_len;
		--s;
	}
	s -= o_len - 1;
	if (!(output = ft_memalloc(o_len + 1)))
		return (NULL);
	*(output + o_len) = 0;
	ft_memcpy(output, s, o_len);
	return (output);
}
