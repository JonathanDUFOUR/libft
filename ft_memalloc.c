/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:58 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 19:21:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*output;

	output = malloc(size);
	if (!output)
		return (NULL);
	ft_bzero(output, size);
	return (output);
}
