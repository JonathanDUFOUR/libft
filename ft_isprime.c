/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:11:43 by jonathan          #+#    #+#             */
/*   Updated: 2020/12/24 12:21:03 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isprime(unsigned int n)
{
	unsigned int	i;

	if (n < 2)
		return (FALSE);
	else
	{
		if (n < 4)
			return (TRUE);
		else
		{
			if (!(n % 2))
				return (FALSE);
			else
			{
				i = 3;
				while (i <= (n / 2))
				{
					if (!(n % i))
						return (FALSE);
					i += 2;
				}
				return (TRUE);
			}
		}
	}
}
