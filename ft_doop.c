/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 02:42:16 by jdufour           #+#    #+#             */
/*   Updated: 2020/04/02 15:58:50 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_token	*ft_add_token(t_token **tokens, t_token *new)
{
	(void) tokens;
	(void) new;
	return (NULL);
}

t_bool	ft_isop(char c)
{
	return (ft_strchr("+-*/%", c) ? TRUE : FALSE);
}

t_bool	ft_isbrac(char c)
{
	return (ft_strchr("()", c) ? TRUE : FALSE);
}

int		ft_doop(char *calc)
{
	int		res;
	t_token	*tokens;
	t_token	last;

	res = 0;
	tokens = NULL;
	(void) tokens;
	(void) last;
	while (*calc)
	{
		if (ft_isspace(*calc))
			++calc;
		else
		{
			if (ft_isop(*calc))
			{
				if (*calc == '-')
				{
					
				}
			}
			if (ft_isbrac(*calc))
			{
				
			}
			if (ft_isdigit(*calc))
			{
				
			}
		}
	}
	return (res);
}
