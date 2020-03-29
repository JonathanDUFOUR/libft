/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 01:46:14 by jdufour           #+#    #+#             */
/*   Updated: 2020/03/29 01:56:48 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cpy;

	if (!alst)
		return ;
	while ((cpy = *alst))
	{
		del(cpy->content, cpy->content_size);
		*alst = cpy->next;
		free(cpy);
	}
}
