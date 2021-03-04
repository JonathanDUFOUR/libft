/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:21 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/04 22:27:07 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_itoa(int nbr)
{
	char	*output;
	size_t	len;

	len = ft_int_size(nbr);
	if (!(output = malloc((len + 1) * sizeof(char))))
		return (NULL);
	output[len] = 0;
	output[0] = (nbr < 0 ? '-' : '0');
	while (len && nbr)
	{
		output[--len] = (-(nbr < 0) | 1) * (nbr % 10) + '0';
		nbr /= 10;
	}
	return (output);
}
