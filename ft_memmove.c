/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:34:43 by marvin            #+#    #+#             */
/*   Updated: 2025/07/05 17:34:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sr;

	i = 0;
	dst = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (dst >= sr)
	{
		while (n > 0)
		{
			n--;
			dst[n] = sr[n];
		}
	}
	else
	{
		while (i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dest);
}

/*int main()
{
	char t[6] = "12345";
	char r[6] = "12345";
	memmove(t+2,t,3);
	ft_memmove(r+2,r,3);
	printf("ori: %s\n",t);
	printf("mine:%s\n",r);
}*/