/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:38 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/04 23:10:11 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <inttypes.h>
#include "libft.h"

char	*ft_itoa_base(int nbr, char *base)
{
	char		*output;
	uint32_t	abs;
	size_t		i;
	size_t		size[2];

	if (ft_wrong_base(base))
		return (0);
	abs = (nbr < 0 ? -nbr : nbr);
	size[OS] = (nbr < 0 ? 2 : 1);
	size[BS] = ft_strlen(base);
	while ((uint32_t)ft_power(size[BS], size[OS]) <= abs)
		++(size[OS]);
	if (!(output = malloc((size[OS] + 1) * sizeof(char))))
		return (NULL);
	i = (nbr < 0 ? 1 : 0);
	output[size[OS]] = 0;
	while (--size[OS] >= i)
	{
		output[size[OS]] = base[abs % (size[BS])];
		abs /= size[BS];
	}
	if (nbr < 0)
		output[0] = '-';
	return (output);
}
