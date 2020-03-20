/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:40:47 by jojo              #+#    #+#             */
/*   Updated: 2020/03/20 17:14:21 by jojo             ###   ########.fr       */
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
