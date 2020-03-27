/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 22:41:53 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/27 01:07:30 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	char_swap(char *c1, char *c2)
{
	*c1 = *c1 ^ *c2;
	*c2 = *c2 ^ *c1;
	*c1 = *c1 ^ *c2;
}

char    *ft_strrev(char *s)
{
	char	*ptr;
	ssize_t	i;
	size_t	o;

	o = 0;
	if (!(ptr = s) || !*s || !s[1])
		return (s);
	while (*s && s[o] && s[o + 1] && ++s) 
		++o;
	o = (s[o] == 0);
	i = !o - 1;
	while (s[++i])
		char_swap(s + i, s - (i + o));
	return (ptr);
}
