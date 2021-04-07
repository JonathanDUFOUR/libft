/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:27:46 by jdufour           #+#    #+#             */
/*   Updated: 2021/04/07 03:18:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	1 malloc version
*/
/*
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
	output = malloc(sizeof(char *) * (size + 1) + len + 1);
	if (!output)
		return (NULL);
	output[size] = NULL;
	return (populate(output, (char *)(output + size + 1), s, c));
}
*/

/*
**	N malloc(s) version
*/

static unsigned int	words_count(char const *s, char c)
{
	unsigned int	count;
	int				new_word;

	count = 0;
	new_word = 1;
	while (*s && *s == c)
		++s;
	while (*s)
	{
		if (*s != c && new_word)
		{
			new_word = 0;
			++count;
		}
		if (*s == c)
			new_word = 1;
		++s;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	register char const	*p = s;

	while (*p && *p != c)
		++p;
	return (p - s);
}

char	**ft_split(char const *s, char c)
{
	char			**output;
	char			**p;
	unsigned int	count;
	size_t			w_len;

	if (!s)
		return (NULL);
	count = words_count(s, c);
	output = malloc((count + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	p = output;
	while (count--)
	{
		while (*s == c)
			++s;
		w_len = word_len(s, c);
		*p = ft_calloc((w_len + 1), sizeof(char));
		ft_strncpy(*p++, s, w_len);
		s += w_len;
	}
	*p = NULL;
	return (output);
}
