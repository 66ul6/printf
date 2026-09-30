/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 20:47:47 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/20 20:47:49 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*t;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p != NULL)
	{
		t = p;
		p = p->next;
		del(t->content);
		free(t);
	}
	*lst = NULL;
}
