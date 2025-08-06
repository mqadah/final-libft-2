/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:13:51 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 13:13:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	int		last;
	int		i;

	i = 0;
	last = -1;
	n = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + n));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (last != -1)
		return ((char *)(s + last));
	return (NULL);
}
