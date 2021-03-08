/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 14:27:41 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/08 01:07:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_ischarset(char c, char const *charset)
{
	if (!charset)
		return (FALSE);
	while (*charset && *charset != c)
		++charset;
	return (*charset ? TRUE : FALSE);
}
