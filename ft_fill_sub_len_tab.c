/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_sub_len_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 16:14:26 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 18:26:22 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

size_t	*ft_fill_sub_len_tab(size_t *tab, size_t size, const char *s, char *charset)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	while (i < size)
	{
		l = 0;
		while (s[j] && ft_ischarset(s[j], charset))
			++j;
		while (s[j] && !ft_ischarset(s[j], charset))
		{
			++l;
			++j;
		}
		tab[i] = l;
		++i;
	}
	return (tab);
}