/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 03:35:04 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/12 07:48:59 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenn;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (start >= i)
		return (ft_strdup(""));
	lenn = i - start;
	if (len > lenn)
		len = lenn;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
