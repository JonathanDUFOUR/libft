/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 01:19:22 by jodufour          #+#    #+#             */
/*   Updated: 2021/05/10 01:23:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <inttypes.h>
#include "libft.h"

static uint32_t	get_o_len(uint32_t abs, uint32_t b_len)
{
	if (abs < b_len)
		return (1);
	return (get_o_len(abs / b_len, b_len) + 1);
}

char	*ft_utoa_base(uint32_t nbr, char const *base)
{
	char		*output;
	char		*p;
	uint32_t	b_len;
	uint32_t	o_len;

	if (!base || ft_wrong_base(base))
		return (NULL);
	b_len = ft_strlen(base);
	o_len = get_o_len(nbr, b_len);
	output = malloc((o_len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	p = output + o_len;
	*p = 0;
	while (o_len--)
	{
		--p;
		*p = base[nbr % b_len];
		nbr /= b_len;
	}
	return (output);
}
