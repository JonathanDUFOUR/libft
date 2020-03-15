/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:27:19 by jojo              #+#    #+#             */
/*   Updated: 2020/03/15 14:39:56 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	ft_wrong_base(char *base);
int	ft_base_digit(char c, char *base);
int	ft_is_in_base(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int res;
	int	sign;
	int	bs;
	int	i;

	if (ft_wrong_base(base))
		return (0);
	res = 0;
	sign = 1;
	bs = ft_strlen(base);
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-' ? -1 : 1);
		i++;
	}
	while (ft_is_in_base(str[i], base))
	{
		res = res * bs + ft_base_digit(str[i], base);
		i++;
	}
	return (res * sign);
}
