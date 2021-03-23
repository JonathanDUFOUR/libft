/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:22:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 18:03:12 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t	ft_int_size(int nbr)
{
	size_t	size;

	size = 1 + (nbr < 0);
	nbr /= 10;
	while (nbr)
	{
		++size;
		nbr /= 10;
	}
	return (size);
}
