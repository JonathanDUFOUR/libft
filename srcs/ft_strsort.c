/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 07:23:13 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 18:59:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_get_strs_size(char **strs)
{
	size_t	size;

	size = 0;
	if (strs)
		while (*strs++)
			++size;
	return (size);
}

char	**ft_strsort(char **strs)
{
	char	**output;
	size_t	size;

	size = ft_get_strs_size(strs);
	output = malloc((size + 1) * sizeof(char *));
	if (!strs || !output)
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
			continue ;
		}
		++output;
		++size;
	}
	return (output - size);
}
