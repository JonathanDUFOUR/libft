/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:42 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/23 19:02:36 by jodufour         ###   ########.fr       */
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
			continue ;
		rd = read(fd, &output, BUFF_SIZE);
		while (rd > 0)
		{
			write(1, &output, rd);
			rd = read(fd, &output, BUFF_SIZE);
		}
		close(fd);
	}
}
