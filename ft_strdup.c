/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:26:58 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef NULL
# define NULL 0
#endif

char	*ft_strdup(char *str)
{
	char	*output;
	int		len;
	int		i;

	len = ft_strlen(str);
	if (!(output = ft_memalloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (str[++i])
		output[i] = str[i];
	output[i] = 0;
	return (output);
}
