/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 03:31:58 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/26 03:04:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*del_iferror(t_list **res, void (*del)(void *))
{
	ft_lstclear(res, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;
	int		size;

	if (!lst || !f)
		return (NULL);
	size = ft_lstsize(lst);
	res = NULL;
	while (size--)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			return (del_iferror(&res, del));
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
