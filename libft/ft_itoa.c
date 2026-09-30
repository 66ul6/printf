/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 09:59:41 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/13 11:12:41 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*a;
	int			l;
	long int	nbr;

	nbr = n;
	l = len(nbr);
	a = (char *)malloc(l + 1);
	if (!a)
		return (NULL);
	a[l] = '\0';
	if (nbr == 0)
		a[0] = '0';
	if (nbr < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		l--;
		a[l] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		a[0] = '-';
	return (a);
}
