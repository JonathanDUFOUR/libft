/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:44:18 by jdufour           #+#    #+#             */
/*   Updated: 2021/04/06 18:48:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (0);
	while ((n - 1) && *s1 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		++s1;
		++s2;
		--n;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
