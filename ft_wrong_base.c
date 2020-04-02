/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:43 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/02 14:29:13 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_wrong_base(char const *base)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(base) < 2)
		return (TRUE);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || ft_isspace(base[i]))
			return (TRUE);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (TRUE);
		++i;
	}
	return (FALSE);
}
