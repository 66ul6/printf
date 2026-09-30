/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 07:40:53 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/26 11:52:24 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void			*p;
	size_t			i;
	unsigned char	*ptr;

	if (size != 0 && (n * size) / size != n)
		return (NULL);
	p = malloc(size * n);
	if (!p)
		return (NULL);
	ptr = (unsigned char *)p;
	i = 0;
	while (i < (size * n))
	{
		ptr[i] = 0;
		i++;
	}
	return (p);
}
