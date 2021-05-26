/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 07:23:13 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 02:06:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	get_strs_size(char **strs)
{
	size_t	size;

	size = 0;
	while (*strs++)
		++size;
	return (size + 1);
}

static void	*free_n_quit(char **output, char **p)
{
	while (p >= output)
		free(*p--);
	free(output);
	return (NULL);
}

static char	**strsdup(char **strs, size_t size)
{
	char	**output;
	char	**p;

	output = malloc(size * sizeof(char *));
	if (!output)
		return (NULL);
	p = output;
	while (--size)
	{
		*p = ft_strdup(*strs++);
		if (!*p)
			return (free_n_quit(output, --p));
		++p;
	}
	*p = NULL;
	return (output);
}

char	**ft_strsort(char **strs)
{
	char	**output;
	size_t	size;

	if (!strs)
		return (NULL);
	size = get_strs_size(strs);
	output = strsdup(strs, size);
	if (!output)
		return (NULL);
	size = 0;
	while (*output && *(output + 1))
	{
		if (ft_strcmp(*output, *(output + 1)) > 0)
		{
			ft_swap_strs(output, output + 1);
			output -= (!!size);
			size -= (!!size);
			continue ;
		}
		++output;
		++size;
	}
	return (output - size);
}
