/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:21 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/15 16:20:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
