/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:28:42 by vimauric          #+#    #+#             */
/*   Updated: 2026/05/25 19:47:52 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (isupper(c) || islower(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("x -> : %d\n", ft_isalpha(0));
		
}
*/
/*
checks for an alphabetic character; in the standard "C" locale, it is 
equivalent to (isupper(c) || islower(c)). In some locales, there may 
be additional characters for which isalpha() is true—letters which are 
neither uppercase nor lowercase.
*/
