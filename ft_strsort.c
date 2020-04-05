/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 07:23:13 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/05 09:13:29 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_strsort(char **strs)
{
	char	**output;
	size_t	size;

	if (!strs)
		return (NULL);
	size = 0;
	while(strs[size])
		++size;
	if (!(output = ft_memalloc((size + 1) * sizeof(char *))))
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
