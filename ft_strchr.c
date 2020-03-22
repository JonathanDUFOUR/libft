/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:20:35 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 21:40:30 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!c)
		return (((char *) s) + ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (((char *) s) + i);
		++i;
	}
	return (NULL);
}
