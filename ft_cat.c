/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:42 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/25 23:40:49 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_cat(char **f)
{
	int		fd;
	int		rd;
	char	output[BUFF_SIZE];

	while (*f)
	{
		fd = open(*f++, O_RDONLY);
		if (fd < 0)
			continue;
		while ((rd = read(fd, &output, BUFF_SIZE)) > 0)
			write(1, &output, rd);
		close(fd);
	}
}
