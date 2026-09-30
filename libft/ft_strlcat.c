/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 07:39:15 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/26 11:53:47 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dst[j] != '\0' && j < size)
		j++;
	if (j >= size)
		return (i + size);
	k = 0;
	while (src[k] && (k + j) < (size - 1))
	{
		dst[j + k] = src[k];
		k++;
	}
	dst[j + k] = '\0';
	return (i + j);
}
