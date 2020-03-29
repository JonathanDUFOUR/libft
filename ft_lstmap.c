/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 03:31:58 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/29 04:30:59 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	*ft_del_iferror(t_list *lst)
{
	t_list	*cpy;

	cpy = lst;
	while (cpy)
	{
		cpy = cpy->next;
		free(lst);
		lst = cpy;
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current;
	t_list	*next;
	t_list	*res;

	if (!f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		if (!(next = f(lst)))
			return (ft_del_iferror(res));
		next->next = 0;
		if (!res)
			res = next;
		else
			current->next = next;
		current = next;
		lst = lst->next;
	}
	return (res);
}
