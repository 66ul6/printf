/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 03:07:10 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/25 03:07:15 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*t;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && _set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && _set(s1[end - 1], set))
		end--;
	t = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!t)
		return (NULL);
	ft_strlcpy(t, &s1[start], end - start + 1);
	return (t);
}
