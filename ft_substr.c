/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 20:47:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/04/06 20:59:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <inttypes.h>
#include "libft.h"

char	*ft_substr(char const *s, uint32_t start, size_t len)
{
	char	*output;

	if (!s || start >= ft_strlen(s) || len > ft_strlen(s + start))
		return (ft_calloc(1, sizeof(char)));
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	*(output + len) = 0;
	while (len--)
		*(output + len) = *(s + start + len);
	return (output);
}
