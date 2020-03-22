/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrs_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 15:41:01 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/22 18:49:38 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

size_t  ft_substrs_count(const char *s, const char *charset)
{
    size_t  count;
    size_t  i;

    count = 0;
    i = 0;
    while (s[i])
    {
        if ((!i && !ft_ischarset(s[i], charset)) ||
            (ft_ischarset(s[i - 1], charset) && !ft_ischarset(s[i], charset)))
            ++count;
        ++i;
    }   
    return (count);
}
