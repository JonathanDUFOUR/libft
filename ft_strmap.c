/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 17:47:35 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 02:03:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*output;
	char	*p;

	if (!s)
		return (NULL);
	output = ft_strdup(s);
	if (output)
	{
		p = output;
		while (*p)
		{
			*p = f(*p);
			++p;
		}
	}
	return (output);
}
