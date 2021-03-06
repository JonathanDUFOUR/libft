/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_oct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 06:05:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/05/18 06:05:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>

void	ft_putnbr_oct(uint32_t n)
{
	char		d;

	if (n > 7)
		ft_putnbr_oct(n / 8);
	d = n % 8 + '0';
	write(1, &d, 1);
}
