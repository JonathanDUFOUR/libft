/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:39:42 by jojo              #+#    #+#             */
/*   Updated: 2020/03/20 17:14:54 by jojo             ###   ########.fr       */
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
