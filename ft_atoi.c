/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:49:40 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 15:49:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
