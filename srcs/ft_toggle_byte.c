/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toggle_byte.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 19:38:53 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/04 01:04:04 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

void	ft_toggle_byte(uint32_t *ptr, uint32_t idx)
{
	idx %= 4;
	if (idx == 0)
		*ptr ^= 0xff;
	if (idx == 1)
		*ptr ^= 0xff00;
	if (idx == 2)
		*ptr ^= 0xff0000;
	if (idx == 3)
		*ptr ^= 0xff000000;
}
