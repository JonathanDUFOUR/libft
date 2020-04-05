/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 09:21:09 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/05 10:10:00 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

int	*ft_intsort(int *tab, size_t size)
{
	int		*output;
	size_t	i;

	if (!tab)
		return (NULL);
	if (!(output = ft_memalloc(size * sizeof(int))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		output[i] = tab[i];
		++i;
	}
	i = 0;
	while (i < size - 1)
	{
		if (output[i] > output[i + 1])
		{
			ft_swap(output + i, output + i + 1);
			i -= (!!i);
		}
		else
			++i;
	}
	return (output);
}
