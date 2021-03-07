/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:58 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/07 22:35:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_convert_base(char *n, char *bf, char *bt)
{
	if (!n)
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(n, bf), bt));
}
