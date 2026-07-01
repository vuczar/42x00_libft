/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:15:20 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 17:02:33 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	str_len;
	size_t	size;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_calloc(1, 1));
	else if (str_len < len + start)
		size = str_len - start + 1;
	else
		size = len + 1;
	sub = ft_calloc(size, sizeof (char));
	if (sub != NULL)
		ft_strlcpy(sub, s + start, size);
	return (sub);
}
