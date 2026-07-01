/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 20:47:27 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 18:19:52 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if ((n < 0) && (n != (-INT_MAX) - 1))
		return (-n);
	return (n);
}

static void	ft_strnbr(int nb, char *str, int index)
{
	char	print;

	if ((nb > (-10)) && (nb < 10))
	{
		if (nb < 0)
			str[0] = '-';
		print = '0' + ft_abs(nb);
		str[index] = print;
	}
	else
	{
		ft_strnbr(nb / 10, str, index - 1);
		print = '0' + ft_abs(nb % 10);
		str[index] = print;
	}
}

char	*ft_itoa(int n)
{
	int		temp;
	int		size;
	char	*num;

	temp = n;
	size = 1;
	while (temp / 10)
	{
		temp /= 10;
		size++;
	}
	if (n < 0)
		size++;
	num = ft_calloc(size + 1, sizeof (char));
	if (!num)
		return (NULL);
	ft_strnbr(n, num, size - 1);
	return (num);
}
