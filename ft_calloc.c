/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 05:44:00 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 18:53:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*output;

	output = malloc(size * n);
	if (!n || !size || !output)
		return (NULL);
	ft_bzero(output, size * n);
	return (output);
}
