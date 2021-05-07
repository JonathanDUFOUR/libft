/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:03 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/07 22:28:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_atoi(char const *s)
{
	int	res;
	int	sign;
	int	int_size;

	res = 0;
	sign = 1;
	int_size = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign ^= ~1u;
	while (ft_isdigit(*s) && ++int_size)
	{
		res = res * 10 + *s++ - '0';
	}
	if (int_size > 10)
	{
		if (sign < 0)
			return (0);
		return (-1);
	}
	return (res * sign);
}
