/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:27:46 by jdufour           #+#    #+#             */
/*   Updated: 2021/06/01 22:46:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**populate(char **output, char *ptr, char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		output[size++] = ptr;
		while (*s && *s != c)
			*ptr++ = *s++;
		*ptr++ = 0;
		while (*s && *s == c)
			++s;
	}
	return (output);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	size;
	size_t	len;

	size = 0;
	len = 0;
	while (*s && *s == c)
		++s;
	while (s[len])
	{
		if (s[len] != c && (!len || s[len - 1] == c))
			++size;
		++len;
	}
	output = malloc((size + 1) * sizeof(char *) + (len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[size] = NULL;
	return (populate(output, (char *)(output + size + 1), s, c));
}
