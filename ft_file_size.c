/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:22:12 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/21 06:22:14 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>

long int ft_file_size(char *file)
{
	struct stat st;

	if(stat(file, &st) == 0)
		return (st.st_size);
	else
		return -1;
}
