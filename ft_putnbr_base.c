/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:56:18 by jojo              #+#    #+#             */
/*   Updated: 2020/03/15 14:30:29 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

int		ft_strlen(char *str);
int		ft_wrong_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	abs;
	unsigned int	bs;
	int				sign;
	char			d;

	if (ft_wrong_base(base))
		return ;
	abs = (nbr < 0 ? -nbr : nbr);
	sign = (nbr < 0 ? 1 : 0);
	bs = ft_strlen(base);
	if (sign)
		write(1, "-", 1);
	if (abs >= bs)
		ft_putnbr_base(abs / bs, base);
	d = base[abs % bs];
	write(1, &d, 1);
}
