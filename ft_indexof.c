/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:22:26 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 17:58:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

ssize_t	ft_indexof(char c, char *str)
{
	ssize_t	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i] && c != str[i])
		i++;
	if (str[i] == c)
		return (i);
	else
		return (-1);
}
