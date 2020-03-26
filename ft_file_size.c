/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:22:12 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/26 00:00:29 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>

size_t	ft_file_size(char *f)
{
	struct stat st;

	return (!stat(f, &st) ? st.st_size : -1);
}
