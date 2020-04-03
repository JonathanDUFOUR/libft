/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toggle_bit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 22:12:18 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/03 22:13:07 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

void	ft_toggle_bit(uint32_t *ptr, uint32_t idx)
{
	*ptr ^= 1UL << (idx % 32);
}
