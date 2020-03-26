/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 22:41:53 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/27 00:41:38 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	char_swap(char *c1, char *c2)
{
	*c1 = *c1 ^ *c2;
	*c2 = *c2 ^ *c1;
	*c1 = *c1 ^ *c2;
}

char		*ft_strrev(char *s)
{
	char	*ptr;
	size_t	i;
	size_t	l2;

	i = 0;
	l2 = 0;
	if (!(ptr = s))
		return (s);
	while (s[i] && s[l2] && s[l2 + 1] && ++i)
		l2 += 2;
	if (!i)
		return (s);
	l2 = s[l2] == 0;
	s += i;
	i = !l2;
	while (s[i])
	{
		char_swap(&s[i], &s[-(i + l2)]);
		++i;
	}
	return (ptr);
}
