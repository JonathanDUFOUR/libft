/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_sub_len_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 16:14:26 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/26 00:10:36 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

size_t	*ft_fill_sub_len_tab(size_t *tab, size_t size, const char *s, char *charset)
{
	size_t	i;
	size_t	l;

	i = 0;
	while (size--)
	{
		l = 0;
		while (*s && ft_ischarset(*s, charset))
			++s;
		while (*s && !ft_ischarset(*s, charset))
		{
			++l;
			++s;
		}
		tab[i++] = l;
	}
	return (tab);
}
