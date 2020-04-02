/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 17:04:12 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/01 17:08:54 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char	*output;

	if ((output = malloc(n * sizeof(char))))
		ft_memcpy(output, s, n);
	return (output);
}
