/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:38 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:23:40 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

#ifndef NULL
# define NULL 0
#endif

char	*ft_itoa_base(int nbr, char *base)
{
	char			*output;
	unsigned int	abs;
	int				sign;
	int				len;
	int				bs;
	int				i;

	if (ft_wrong_base(base))
		return (0);
	sign = (nbr < 0 ? 1 : 0);
	abs = (sign ? -nbr : nbr);
	len = 1;
	bs = ft_strlen(base);
	while ((unsigned int)ft_power(bs, len) <= abs)
		len++;
	len += sign;
	if (!(output = (char *) ft_memalloc((len + 1) * sizeof(char))))
		return (NULL);
	i = (sign ? 1 : 0);
	output[len] = 0;
	while (--len >= i)
	{
		output[len] = base[abs % bs];
		abs /= bs;
	}
	if (sign)
		output[0] = '-';
	return (output);
}
