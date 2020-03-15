/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:40:47 by jojo              #+#    #+#             */
/*   Updated: 2020/03/15 13:18:02 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif

int		ft_int_size(int nbr);

char	*ft_itoa(int nbr)
{
	unsigned int	abs;
	int				sign;
	char			*output;
	int				len;
	int				i;

	abs = (nbr < 0 ? -nbr : nbr);
	sign = (nbr < 0 ? 1 : 0);
	len = (sign ? ft_int_size(abs) + 1 : ft_int_size(abs));
	if (!(output = malloc(len * sizeof(int))))
		return (NULL);
	i = (sign ? 1 : 0);
	while (--len >= i)
	{
		output[len] = abs % 10;
		abs /= 10;
	}
	if (sign)
		output[0] = '-';
	return (output);
}
