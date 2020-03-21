/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:21 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:23:23 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

#ifndef NULL
# define NULL 0
#endif

char	*ft_itoa(int nbr)
{
	char			*output;
	int				len;

	len = ft_int_size(nbr);
	if (!(output = (char *) ft_memalloc((len + 1) * sizeof(char))))
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
