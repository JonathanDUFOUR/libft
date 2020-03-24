/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:58 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/24 05:14:05 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*output;

	if (!(output = (char *) malloc(size)))
		return (NULL);
	ft_bzero(output, size);
	return (output);
}
