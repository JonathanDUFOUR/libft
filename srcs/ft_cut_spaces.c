/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 15:42:07 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 22:52:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_cut_spaces(char *s)
{
	char	*output;
	char	*p;
	int		spaces;

	if (!s)
		return (NULL);
	p = s;
	spaces = 0;
	while (*s)
		if (ft_isspace(*s++))
			++spaces;
	s = p;
	output = malloc((ft_strlen(s) - spaces + 1) * sizeof(char));
	if (!output)
		return (NULL);
	p = output;
	while (*s)
	{
		if (!ft_isspace(*s))
			*p++ = *s;
		++s;
	}
	*p = 0;
	return (output);
}
