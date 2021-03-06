/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <jojo19.duf@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:02:34 by jonathan          #+#    #+#             */
/*   Updated: 2021/03/06 23:26:02 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*p;

	if (!lst || !*lst)
		return ;
	p = *lst;
	while (p)
	{
		next = p->next;
		ft_lstdelone(p, del);
		free(p);
		p = next;
	}
	*lst = NULL;
}
