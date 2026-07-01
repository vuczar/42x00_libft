/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 13:10:48 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 17:21:48 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (in_word && (*s == c))
			in_word = 0;
		if (!in_word && (*s != c))
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && (s[len] != c))
		len++;
	return (len);
}

static void	*ft_free_all(char **split, size_t i)
{
	while (i > 0)
	{
		i--;
		free(split[i]);
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	curr_len;
	char	**split;

	words = ft_word_count(s, c);
	split = ft_calloc(words + 1, sizeof (char *));
	if (!split)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && (*s == c))
			s++;
		curr_len = ft_word_len(s, c);
		split[i] = ft_calloc(curr_len + 1, sizeof (char));
		if (!split[i])
			return (ft_free_all(split, i));
		ft_strlcpy(split[i], s, curr_len + 1);
		s += curr_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
