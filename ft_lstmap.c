/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 03:31:58 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/07 01:04:51 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*del_iferror(t_list **res, void (*del)(void *))
{
	ft_lstclear(res, del);
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *))
{
	t_list	*res;
	t_list	*new;
	int		size;

	if (!f || !lst)
		return (NULL);
	size = ft_lstsize(lst);
	if (size--)
	{
		if (!(res = ft_lstnew(f(lst->content))))
			return (del_iferror(&res, del));
		lst = lst->next;
	}
	while (size--)
	{
		if (!(new = ft_lstnew(f(lst->content))))
			return (del_iferror(&res, del));
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
