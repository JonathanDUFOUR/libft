/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 02:19:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 18:40:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	abs;
	char			d;

	abs = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		abs = -n;
	}
	if (abs > 9)
		ft_putnbr_fd(abs / 10, fd);
	d = abs % 10 + '0';
	write(fd, &d, 1);
}
