/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:21 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/15 16:18:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
char	*ft_itoa(int nbr)
{
	char		*output;
	uint32_t	len;

	len = ft_intlen(nbr);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[len] = 0;
	if (nbr < 0)
		output[0] = '-';
	else
		output[0] = '0';
	while (len && nbr)
	{
		output[--len] = (-(nbr < 0) | 1) * (nbr % 10) + '0';
		nbr /= 10;
	}
	return (output);
}
*/

char	*ft_itoa(int n)
{
	char		*output;
	uint32_t	len;

	len = ft_intlen(n);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output += len;
	*output-- = 0;
	while (n && len--)
	{
		*output-- = (-(n < 0) | 1) * (n % 10) + '0';
		n /= 10;
	}
	if (len)
		*output-- = '-';
	return (++output);
}
