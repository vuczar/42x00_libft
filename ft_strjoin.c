/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:07:56 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 18:25:20 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*joined;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = ft_calloc(size, sizeof (char));
	if (joined != NULL)
	{
		ft_strlcpy(joined, s1, size);
		ft_strlcat(joined, s2, size);
	}
	return (joined);
}
