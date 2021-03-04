/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/04 22:46:10 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char const *str)
{
	char	*output;
	int		len;
	int		i;

	len = ft_strlen(str);
	if (!(output = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (str[++i])
		output[i] = str[i];
	output[i] = 0;
	return (output);
}
