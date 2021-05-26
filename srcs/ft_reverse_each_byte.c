/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_each_byte.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 06:10:12 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 23:39:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "libft.h"

void	ft_reverse_each_byte(uint32_t *addr)
{
	uint32_t	i;

	if (!addr)
		return ;
	i = 0;
	while (i < 4)
		ft_reverse_byte(addr, i++);
}
