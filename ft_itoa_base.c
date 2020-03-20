/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:38:09 by jojo              #+#    #+#             */
/*   Updated: 2020/03/20 00:47:44 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

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
	if (!(output = malloc((len + 1) * sizeof(char))))
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
