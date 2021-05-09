/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 05:36:06 by jodufour          #+#    #+#             */
/*   Updated: 2021/05/09 06:09:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <sys/types.h>

size_t	ft_uint_size(uint32_t n)
{
	size_t	size;

	size = 1;
	n /= 10;
	while (n)
	{
		++size;
		n /= 10;
	}
	return (size);
}
