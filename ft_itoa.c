/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:40:47 by jojo              #+#    #+#             */
/*   Updated: 2020/03/19 01:17:22 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_int_size(int nbr);

char	*ft_itoa(int nbr)
{
	char			*output;
	int				len;

	len = ft_int_size(nbr);
	if (!(output = malloc((len + 1))))
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
