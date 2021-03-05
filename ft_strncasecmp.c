/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:38:36 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/05 00:18:04 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

int	ft_strncasecmp(char const *s1, char const *s2, size_t n)
{
	while (n && s1 && s2 && *s1 && ft_toupper(*s1++) == ft_toupper(*s2++))
		--n;
	return (*s1 - *s2);
}
