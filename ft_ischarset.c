/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 14:27:41 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/02 14:25:08 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_ischarset(char c, char const *charset)
{
	while (*charset && *charset != c)
		++charset;
	return (*charset ? TRUE : FALSE);
}
