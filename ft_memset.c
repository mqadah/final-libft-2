/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:33:51 by marvin            #+#    #+#             */
/*   Updated: 2025/07/05 16:33:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	i = 0;
	dst = (unsigned char *)s;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
