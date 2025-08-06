/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:05:58 by marvin            #+#    #+#             */
/*   Updated: 2025/07/07 17:05:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putcharr(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (x < 0)
	{
		putcharr('-', fd);
		x = -x;
	}
	if (x >= 10)
		ft_putnbr_fd(x / 10, fd);
	putcharr((x % 10) + '0', fd);
}
