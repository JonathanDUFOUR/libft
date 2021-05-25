/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_neo_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 21:39:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 19:16:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_neo_strjoin(char const **strs, char const *link)
{
	char		*output;
	char const	**cpy;
	size_t		o_len;
	size_t		l_len;

	if (!strs)
		return (NULL);
	if (!*strs || !*(strs + 1))
		return ((char *)*strs);
	cpy = strs;
	l_len = ft_strlen(link);
	o_len = ft_strlen(*cpy++);
	while (*cpy)
		o_len += ft_strlen(*cpy++) + l_len;
	output = malloc(o_len + 1);
	if (!output)
		return (NULL);
	ft_bzero(output, o_len + 1);
	while (*strs)
	{
		output = ft_strcat(output, *strs++);
		output = ft_strcat(output, link);
	}
	*(output + o_len) = 0;
	return (output);
}
