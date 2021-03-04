/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:38 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/04 22:34:12 by jonathan         ###   ########.fr       */
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
	char		sign;
	size_t		len;
	size_t		bs;
	size_t		i;

	if (ft_wrong_base(base))
		return (0);
	sign = (nbr < 0 ? 'n' : 'p');
	abs = (sign == 'n' ? -nbr : nbr);
	len = (sign == 'n' ? 2 : 1);
	bs = ft_strlen(base);
	while ((uint32_t)ft_power(bs, len) <= abs)
		len++;
	if (!(output = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = (sign ? 1 : 0);
	output[len] = 0;
	while (--len >= i)
	{
		output[len] = base[abs % bs];
		abs /= bs;
	}
	if (sign == 'n')
		output[0] = '-';
	return (output);
}
