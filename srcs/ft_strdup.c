/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 02:15:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char const *str)
{
	char	*output;
	char	*p;
	size_t	len;

	len = ft_strlen(str);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	p = output;
	while (*str)
		*p++ = *str++;
	*p = 0;
	return (output);
}
