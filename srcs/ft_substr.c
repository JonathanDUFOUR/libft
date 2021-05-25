/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 20:47:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/20 13:37:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <inttypes.h>
#include "libft.h"

char	*ft_substr(char const *s, uint32_t start, size_t len)
{
	char	*output;
	size_t	s_len;

	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	s_len = ft_strlen(s);
	if (len > (s_len - (size_t)start))
		len = s_len - (size_t)start;
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	*(output + len) = 0;
	while (len--)
		*(output + len) = *(s + start + len);
	return (output);
}
