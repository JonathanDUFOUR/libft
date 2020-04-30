/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 05:44:00 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/30 06:42:48 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*output;

	if (!n || !size || !(output = malloc (size * n)))
		return (NULL);
	ft_bzero(output, size * n);
	return (output);
}
