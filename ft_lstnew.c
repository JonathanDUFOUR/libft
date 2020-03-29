/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 00:37:47 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/29 01:13:30 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
		return (lst);
	}
	if (!(lst->content = malloc(content_size)))
	{
		free(lst);
		return (NULL);
	}
	lst->content = (void *)content;
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
