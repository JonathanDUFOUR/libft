/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_each_byte.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 06:10:12 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/05 06:35:46 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

void	ft_reverse_each_byte(uint32_t *ptr)
{
	uint32_t	i;

	i = 0;
	while (i < 4)
		ft_reverse_byte(ptr, i++);
}
