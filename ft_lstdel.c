/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 01:46:14 by jdufour           #+#    #+#             */
/*   Updated: 2021/03/06 22:41:54 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *))
{
	t_list	*cpy;

	if (!alst)
		return ;
	while ((cpy = *alst))
	{
		del(cpy->content);
		*alst = cpy->next;
		free(cpy);
	}
}
