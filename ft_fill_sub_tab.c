/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_sub_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:56:45 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 20:49:05 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

char	**ft_fill_sub_tab(char **tab, size_t *sub_len, const char *s, char c)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!ft_ischarset(s[i], &c))
		{
			ft_strncpy(tab[j], s + i, sub_len[j]);
			i += sub_len[j];
			++j;
		}
		else
			++i;
	}
	return (tab);
}
