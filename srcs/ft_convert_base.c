/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:58 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/07 22:20:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_convert_base(char const *n, char const *bf, char const *bt)
{
	if (!n || ft_wrong_base(bf) || ft_wrong_base(bt))
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(n, bf), bt));
}
