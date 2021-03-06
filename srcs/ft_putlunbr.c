/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:42:00 by jonathan          #+#    #+#             */
/*   Updated: 2021/05/10 01:46:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

void	ft_putlunbr(uint64_t n)
{
	char	d;

	if (n > 9)
		ft_putlunbr(n / 10);
	d = n % 10 + '0';
	write(1, &d, 1);
}
