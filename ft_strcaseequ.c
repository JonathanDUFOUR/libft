/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaseequ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 06:46:06 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/30 20:35:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcaseequ(char const *s1, char const *s2)
{
	if (s1 == s2)
		return (TRUE);
	while (s1 && s2 && *s1 && ft_toupper(*s1++) == ft_toupper(*s2))
		++s2;
	return (s1 && s2 && ft_toupper(*s1) == ft_toupper(*s2));
}
