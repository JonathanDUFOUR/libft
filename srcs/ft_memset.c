/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:37:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 23:32:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include <sys/types.h>

void	*ft_memset(void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	while (n)
		((uint8_t *)s)[--n] = c;
	return (s);
}
