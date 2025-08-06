/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:03:47 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 19:03:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_finalsize(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*store(const char *s, int *start, char c)
{
	int		i;
	int		count;
	int		cur;
	char	*d;

	count = 0;
	i = 0;
	cur = *start;
	while (s[*start] != c && s[*start])
	{
		count++;
		(*start)++;
	}
	*start = cur;
	d = (char *)malloc((count + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	while (s[*start] && s[*start] != c)
	{
		d[i] = s[*start];
		i++;
		(*start)++;
	}
	d[i] = '\0';
	return (d);
}

static void	free_split(char **d, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(d[i]);
		i++;
	}
	free(d);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**d;

	i = 0;
	j = 0;
	d = (char **)malloc((get_finalsize(s, c) + 1) * sizeof(char *));
	if (d == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			d[j] = store(s, &i, c);
			if (d[j] == NULL)
			{
				free_split(d, get_finalsize(s, c));
				return (NULL);
			}
			j++;
		}
	}
	return (d[j] = NULL, d);
}
