/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:27:26 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:27:30 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t  ft_strlen(register const char *str)
{
	register char *p;

	p = (char *)str;
	while (*p)
		++p;
	return (p - str);
}
