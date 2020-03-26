/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 02:19:11 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/26 02:32:25 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	abs;
	int				sign;
	char			d;

	abs = (n < 0 ? -n : n);
	sign = (n < 0 ? 1 : 0);
	if (sign)
		write(fd, "-", 1);
	if (abs > 9)
		ft_putnbr_fd(abs / 10, fd);
	d = abs % 10 + 48;
	write(fd, &d, 1);
}
