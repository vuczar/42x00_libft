/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 17:37:02 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 18:16:22 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	char const	*ptr;
	size_t		size;

	while (*s1 && ft_find(*s1, set))
		s1++;
	ptr = s1;
	size = 0;
	while (*ptr)
	{
		if (!ft_find(*ptr, set))
			size = ptr - s1;
		ptr++;
	}
	trimmed = ft_substr(s1, 0, size + 1);
	return (trimmed);
}
