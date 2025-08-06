/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:37:31 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 13:37:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return ((ss + i));
		i++;
	}
	return (NULL);
}
