/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toggle_nbyte.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 20:01:54 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/03 21:10:44 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

void	ft_toggle_nbyte(uint32_t *ptr, uint32_t n)
{
	n %= 5;
	if (n == 1)
		*ptr ^= 0xff;
	if (n == 2)
		*ptr ^= 0xffff;
	if (n == 3)
		*ptr ^= 0xffffff;
	if (n == 4)
		*ptr ^= 0xffffffff;
}
