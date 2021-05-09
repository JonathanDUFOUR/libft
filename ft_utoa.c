/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 05:31:42 by jodufour          #+#    #+#             */
/*   Updated: 2021/05/09 05:39:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_utoa(uint32_t n)
{
	char	*output;
	size_t	len;

	len = ft_uint_size(n);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[len] = 0;
	while (len && n)
	{
		output[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (output);
}
