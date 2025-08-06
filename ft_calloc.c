/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:49:09 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 15:49:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			tot;
	size_t			i;
	void			*p;
	unsigned char	*temp;

	i = 0;
	if (nmemb <= 0 || size <= 0)
	{
		p = malloc(sizeof(char) * 1);
		return (p);
	}
	tot = nmemb * size;
	if (tot / size != nmemb || tot / nmemb != size)
		return (NULL);
	p = malloc(sizeof(char) * tot);
	if (p == NULL)
		return (NULL);
	temp = (unsigned char *)p;
	while (i < tot)
	{
		temp[i] = 0;
		i++;
	}
	return (p);
}
