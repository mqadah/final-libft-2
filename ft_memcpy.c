/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:23:46 by marvin            #+#    #+#             */
/*   Updated: 2025/07/05 17:23:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	i = 0;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
