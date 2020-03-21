/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:19 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:21:22 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(char *str, char *base)
{
	int res;
	int	sign;
	int	bs;
	int	i;

	if (ft_wrong_base(base))
		return (0);
	res = 0;
	sign = 1;
	bs = ft_strlen(base);
	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-' ? -1 : 1);
		i++;
	}
	while (str[i] && ft_indexof(str[i], base) != -1)
	{
		res = res * bs + ft_indexof(str[i], base);
		i++;
	}
	return (res * sign);
}
