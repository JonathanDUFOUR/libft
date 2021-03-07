/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:43 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/07 19:48:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_wrong_base(char const *base)
{
	size_t	i;
	size_t	j;

	if (!base || ft_strlen(base) < 2)
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
