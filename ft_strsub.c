/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 20:47:11 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/28 21:02:18 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned start, size_t len)
{
	char	*output;

	output = ft_memalloc(len + 1);
	*(output + len) = 0;
	while (len--)
		*(output + len) = *(s + start + len);
	return (output);
}
