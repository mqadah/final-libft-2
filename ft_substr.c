/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:11:33 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 16:11:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		dst[i++] = s[start++];
	}
	dst[i] = '\0';
	return (dst);
}
