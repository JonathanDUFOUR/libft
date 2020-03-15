/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:39:42 by jojo              #+#    #+#             */
/*   Updated: 2020/03/15 13:16:12 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif

int		ft_strlen(char *str);

char	*ft_strdup(char *str)
{
	char	*output;
	int		len;
	int		i;

	len = ft_strlen(str);
	if (!(output = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (str[++i])
		output[i] = str[i];
	output[i] = 0;
	return (output);
}
