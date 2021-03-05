/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 07:23:13 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/05 00:30:49 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_get_strs_size(char **strs)
{
	size_t	size;

	size = 0;
	while (*strs++)
		++size;
	return (size);
}

char	**ft_strsort(char **strs)
{
	char	**output;
	size_t	size;

	if (!strs)
		return (NULL);
	size = ft_get_strs_size(strs);
	if (!(output = malloc((size + 1) * sizeof(char *))))
		return (NULL);
	output[size] = NULL;
	while (size--)
		output[size] = ft_strdup(strs[size]);
	size = 0;
	while (*output && *(output + 1))
	{
		if (ft_strcmp(*output, *(output + 1)) > 0)
		{
			ft_swap_strs(output, output + 1);
			output -= (!!size);
			size -= (!!size);
			continue;
		}
		++output;
		++size;
	}
	return (output - size);
}
