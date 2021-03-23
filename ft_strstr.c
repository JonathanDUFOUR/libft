/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:03 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 17:38:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "libft.h"

char	*ft_strstr(char const *s, char const *tf)
{
	size_t const	tf_l = ft_strlen(tf);
	size_t const	s_l = ft_strlen(s);
	size_t			tab[256];
	size_t			i;

	i = 0;
	if (!s || !tf || tf_l > s_l || !tf_l)
		return ((char *)(!tf_l * (uintptr_t)s));
	while (i < 256)
		tab[i++] = tf_l;
	i = 0;
	while (i < tf_l - 1)
	{
		tab[(int)tf[i]] = tf_l - i - 1;
		++i;
	}
	i = 0;
	while (i <= (s_l - tf_l))
	{
		if (s[tf_l - 1] == tf[tf_l - 1] && !ft_memcmp(s, tf, tf_l - 1))
			return ((char *)s);
		i += tab[(uint8_t)s[tf_l - 1]];
		s += tab[(uint8_t)s[tf_l - 1]];
	}
	return (NULL);
}
