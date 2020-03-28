/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncaseequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 06:51:16 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/28 06:56:42 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncaseequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == s2 || !n)
		return (1);
	while (n && s1 && s2 && *s1 && ft_toupper(*s1++) == ft_toupper(*s2++))
		--n;
	return (!n || (s1 && s2 && ft_toupper(*s1) == ft_toupper(*s2)));
}
