/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 03:31:58 by jdufour           #+#    #+#             */
/*   Updated: 2021/05/10 01:37:12 by jodufour         ###   ########.fr       */
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

	if (!f || !lst)
		return (NULL);
	size = ft_lstsize(lst);
	if (size--)
	{
		res = ft_lstnew(f(lst->content));
		if (!res)
			return (del_iferror(&res, del));
		lst = lst->next;
	}
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
