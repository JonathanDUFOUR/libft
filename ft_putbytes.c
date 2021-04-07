/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:12:50 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/07 18:33:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <inttypes.h>
#include <unistd.h>
#include "libft.h"

void	ft_putbytes(void *addr, size_t size)
{
	
	while (size--)
	{
		ft_putbyte(*((uint8_t *)(addr + size)));
		if (size)
			write(1, " ", 1);
	}
}
