/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:28:36 by jojo              #+#    #+#             */
/*   Updated: 2020/03/03 05:57:45 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_cat(int argc, char **argv)
{
	int i;
	int fd;
	char output;

	i = 0;
	output = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if(fd >= 0)
			while (read(fd, &output, 1) != 0)
				write(1, &output, 1);
		close(fd);
	}
	return ;
}
