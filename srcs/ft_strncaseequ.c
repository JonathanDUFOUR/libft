/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncaseequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 06:51:16 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 00:11:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strncaseequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == s2 || !n)
		return (true);
	while (n && s1 && s2 && *s1 && ft_toupper(*s1) == ft_toupper(*s2))
	{
		++s1;
		++s2;
		--n;
	}
	return (!n || (s1 && s2 && ft_toupper(*s1) == ft_toupper(*s2)));
}
