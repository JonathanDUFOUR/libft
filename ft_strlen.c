/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:47:39 by jojo              #+#    #+#             */
/*   Updated: 2020/03/18 22:23:50 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlen(register const char *str)
{
	register char *p;

	p = (char *)str;
	while (*p)
		++p;
	return (p - str);
}
