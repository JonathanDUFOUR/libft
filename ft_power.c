/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:09 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:24:11 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nbr, int pow)
{
	if (pow < 0)
		return (0);
	else if (pow == 0)
		return (1);
	else if (pow == 1)
		return (nbr);
	else
		return (nbr * ft_power(nbr, --pow));
}
