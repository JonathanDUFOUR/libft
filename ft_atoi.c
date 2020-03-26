/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:03 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 19:56:44 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign ^= (1u << 31);
	while (ft_isdigit(*s))
		res = res * 10 + *s++ - '0';
	if (!res)
		sign = 0;
	return (res | sign);
}
