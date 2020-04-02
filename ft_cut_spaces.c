/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 15:42:07 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/02 16:06:07 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_cut_spaces(char *s)
{
	char	*output;
	char	*cpy;
	int		spaces;

	cpy = s;
	spaces = 0;
	while (*s)
		if (ft_isspace(*s++))
			++spaces;
	s = cpy;
	if (!(output = ft_memalloc((ft_strlen(s) - spaces + 1) * sizeof(char))))
		return (NULL);
	cpy = output;
	while (*s)
	{
		if (!ft_isspace(*s))
			*cpy++ = *s;
		++s;
	}
	*cpy = 0;
	return (output);
}
