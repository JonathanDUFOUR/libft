/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 17:04:12 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 00:14:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char	*output;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	n = (n > len) * len + (n <= len) * n;
	output = ft_calloc((n + 1), sizeof(char));
	if (output)
		ft_memcpy(output, s, n);
	return (output);
}
