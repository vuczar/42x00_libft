/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 15:26:20 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 16:05:06 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	size;

	size = ft_strlen(s) + 1;
	new_str = ft_calloc(size, sizeof (char));
	if (new_str == NULL)
		return (new_str);
	ft_strlcpy(new_str, s, size);
	return (new_str);
}
