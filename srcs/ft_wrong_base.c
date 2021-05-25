/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:43 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 22:30:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wrong_base(char const *base)
{
	char const	*p;

	if (!base || ft_strlen(base) < 2)
		return (TRUE);
	while (*base)
	{
		if (*base == '-' || *base == '+' || ft_isspace(*base))
			return (TRUE);
		p = base;
		while (*++p)
			if (*base == *p)
				return (TRUE);
	}
	return (FALSE);
}
