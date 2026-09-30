/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 06:04:48 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/22 06:04:53 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*t;

	if (!lst)
		return (NULL);
	t = NULL;
	while (lst)
	{
		if (f)
			p = ft_lstnew(f(lst->content));
		else
			p = ft_lstnew(lst->content);
		if (!p)
		{
			ft_lstclear(&t, del);
			return (NULL);
		}
		ft_lstadd_back(&t, p);
		lst = lst->next;
	}
	return (t);
}
