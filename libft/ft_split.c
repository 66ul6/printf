/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaghair <kmaghair@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 06:24:48 by kmaghair          #+#    #+#             */
/*   Updated: 2026/09/25 04:02:17 by kmaghair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*freee(char **strs, int count)
{
	while (count > 0)
	{
		count--;
		free(strs[count]);
	}
	free(strs);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*get_word(const char *s, char c)
{
	char	*word;
	int		l;
	int		i;

	l = 0;
	while (s[l] && s[l] != c)
		l++;
	word = (char *)malloc(sizeof(char) * (l + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < l)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		res[i] = get_word(s, c);
		if (!res[i])
			return (freee(res, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	res[i] = NULL;
	return (res);
}
