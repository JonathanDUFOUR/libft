/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:29:56 by jojo              #+#    #+#             */
/*   Updated: 2020/03/18 22:30:49 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		ft_wrong_base(char *base)
{
	int	i;
	int j;

	if (ft_strlen(base) < 2)
		return (1);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+' ||
			(base[i] >= 8 && base[i] <= 13) || base[i] == ' ')
			return (1);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}
