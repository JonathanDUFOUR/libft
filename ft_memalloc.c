/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:37:25 by jojo              #+#    #+#             */
/*   Updated: 2020/03/20 16:35:23 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>

void	*ft_memalloc(size_t size)
{
	char	*output;

	if (!(output = (char *) malloc(size)))
		return (NULL);
	while (size > 0)
		output[size--] = 0;
	output[size] = 0;
	return (output);
}
