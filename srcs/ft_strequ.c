/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 20:01:04 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 00:03:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdint.h>

bool	ft_strequ(char const *s1, char const *s2)
{
	if (s1 == s2)
		return (true);
	while (s1 && s2 && *s1 && *(uint8_t *)s1 == *(uint8_t *)s2++)
		++s1;
	return (s1 && s2 && *(uint8_t *)s1 == *(uint8_t *)s2);
}
