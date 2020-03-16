/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:38:09 by jojo              #+#    #+#             */
/*   Updated: 2020/03/15 17:28:40 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif

int		ft_wrong_base(char *base);
int		ft_power(int nbr, int pow);
int		ft_strlen(char *str);

char	*ft_itoa_base(int nbr, char *base)
{
	char			*output;
	unsigned int	abs;
	int				sign;
	int				len;
	int				bs;
	int				i;

	if (ft_wrong_base(base))
		return (NULL);
	sign = (nbr < 0 ? 1 : 0);
	abs = (sign ? -nbr : nbr);
	bs = ft_strlen(base);
	len = 1;
	while (ft_power(bs, len) <= nbr)
		len++;
	if (!(output = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = (sign ? 1 : 0);
	output[len] = 0;
	while (--len >= i)
	{
		output[i] = base[abs % bs];
		abs /= bs;
	}
	if (sign)
		output[0] = '-';
	return (output);
}
