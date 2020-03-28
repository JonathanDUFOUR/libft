/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 21:39:40 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/28 22:53:32 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const **strs, char const *link)
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
	if (!(output = ft_memalloc(o_len + 1)))
		return (NULL);
	while (*strs)
	{
		output = ft_strcat(output, *strs++);
		output = ft_strcat(output, link);
	}
	*(output + o_len) = 0;
	return (output);
}
