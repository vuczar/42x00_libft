/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 09:40:52 by vimauric          #+#    #+#             */
/*   Updated: 2026/06/28 18:21:30 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	print;

	if ((n > (-10)) && (n < 10))
	{
		if (n < 0)
			write(fd, "-", 1);
		print = '0' + my_abs(n);
		write(fd, &print, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		print = '0' + my_abs(n % 10);
		write(fd, &print, 1);
	}
}
