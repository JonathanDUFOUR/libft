/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:43 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 03:55:53 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrong_base(const char *base)
{
	int	i;
	int j;

	if (ft_strlen(base) < 2)
		return (1);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+' ||
			(base[i] >= 8 && base[i] <= 13) || base[i] == ' ')
			return (1);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}
