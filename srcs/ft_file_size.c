/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:22:12 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/25 22:55:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>

ssize_t	ft_file_size(char *f)
{
	struct stat	st;

	if (!f)
		return (-1);
	if (!stat(f, &st))
		return (st.st_size);
	else
		return (-1);
}
