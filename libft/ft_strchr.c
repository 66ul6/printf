/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 19:28:33 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/26 11:53:17 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)a)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (str[i] == (char)a)
	{
		return ((char *)(str + i));
	}
	return (NULL);
}
