/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 17:55:51 by jodufour         ###   ########.fr       */
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
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	i = -1;
	while (str[++i])
		output[i] = str[i];
	output[i] = 0;
	return (output);
}
