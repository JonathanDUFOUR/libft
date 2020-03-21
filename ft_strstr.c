/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:03 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:28:05 by jdufour          ###   ########.fr       */
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
