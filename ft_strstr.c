/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:22:28 by jojo              #+#    #+#             */
/*   Updated: 2020/03/19 22:19:54 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	if (!*to_find)
		return (str);
	while (str[++i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && to_find[j] == str[i + j])
			j++;
		if (!to_find[j])
			return (str + i);
	}
	return (0);
}
