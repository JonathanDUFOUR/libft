/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:27:19 by jojo              #+#    #+#             */
/*   Updated: 2020/03/20 02:36:01 by jojo             ###   ########.fr       */
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
