/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:09 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 01:41:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int	ft_power(int nbr, uint32_t pow)
{
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (nbr);
	else
		return (nbr * ft_power(nbr, --pow));
}
