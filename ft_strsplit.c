/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:27:46 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 20:50:04 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**output;
	size_t	size;
	size_t	*sub_len;
	size_t	i;

	size = ft_substrs_count(s, &c);
	if (!(output = ft_memalloc((size + 1) * sizeof(char *))))
		return (NULL);
	if (!(sub_len = ft_memalloc((size + 1) * sizeof(size_t))))
		return (NULL);
	sub_len = ft_fill_sub_len_tab(sub_len, size, s, &c);
	i = 0;
	while (i < size)
	{
		if (!(output[i] = ft_memalloc((sub_len[i] + 1) * sizeof(char))))
			return (NULL);
		output[i][sub_len[i]] = 0;
		++i;
	}
	output = ft_fill_sub_tab(output, sub_len, s, c);
	return (output);
}
