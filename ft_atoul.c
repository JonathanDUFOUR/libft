/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 22:04:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	ft_atoul(char const *s)
{
	unsigned long	output;

	output = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '+')
		++s;
	while (ft_isdigit(*s))
		output = output * 10 + *s++ - '0';
	return (output);
}
