/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 04:52:27 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/30 23:12:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define __NO_CTYPE

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int	ft_tolower(int c)
{
	return ((c + ft_isupper(c) * ('a' - 'A')));
}
