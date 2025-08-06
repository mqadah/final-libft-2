/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:10:21 by marvin            #+#    #+#             */
/*   Updated: 2025/07/06 17:10:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size_front(const char *s1, const char *set, int *t1)
{
	int	i;
	int	count;
	int	j;

	j = 0;
	count = 0;
	i = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			count++;
			i++;
			j = -1;
			(*t1)++;
		}
		j++;
	}
	return (count);
}

static int	get_size_last(const char *s1, const char *set, int *t2, int *t1)
{
	int	i;
	int	count;
	int	j;

	j = ft_strlen(set) - 1;
	i = ft_strlen(s1) - 1;
	count = 0;
	if (*t1 == ft_strlen(s1))
		return (count);
	while (j >= 0)
	{
		if (s1[i] == set[j])
		{
			count++;
			i--;
			j = ft_strlen(set);
			(*t2)++;
		}
		j--;
	}
	return (count);
}

static char	*store(char *dst, const char *s1, int *x, int *y)
{
	int	s;
	int	ss;
	int	i;

	i = 0;
	s = *x;
	ss = ft_strlen(s1) - *y;
	while (s < ss)
	{
		dst[i] = s1[s];
		s++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		n;
	char	*dst;
	int		x;
	int		y;
	int		tot;

	x = 0;
	y = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	tot = get_size_front(s1, set, &x) + get_size_last(s1, set, &y, &x);
	n = ft_strlen(s1) - tot;
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (dst == NULL)
		return (NULL);
	dst = store(dst, s1, &x, &y);
	if (dst == NULL)
		return (NULL);
	return (dst);
}

/*int	main(void)
{
	char	*result;

	// Edge Case 1: All characters are in set (should return empty string)
	result = ft_strtrim("aaaa", "a");
	printf("Edge 1: '%s'\n", result);
	free(result);

	// Edge Case 2: Characters at both ends, but not in the middle
	result = ft_strtrim("aaabaa", "a");
	printf("Edge 2: '%s'\n", result);
	free(result);

	// Edge Case 3: Characters at the start only
	result = ft_strtrim("aaab", "a");
	printf("Edge 3: '%s'\n", result);
	free(result);

	// Edge Case 4: Characters at the end only
	result = ft_strtrim("baaa", "a");
	printf("Edge 4: '%s'\n", result);
	free(result);

	// Edge Case 5: Only middle is in the set — should NOT trim
	result = ft_strtrim("baab", "a");
	printf("Edge 5: '%s'\n", result);
	free(result);

	// Edge Case 6: Empty string
	result = ft_strtrim("", "a");
	printf("Edge 6: '%s'\n", result);
	free(result);

	// Edge Case 7: Empty set (no trimming)
	result = ft_strtrim("hello", "");
	printf("Edge 7: '%s'\n", result);
	free(result);

	// Edge Case 8: NULL input string
	result = ft_strtrim(NULL, "a");
	printf("Edge 8: %s\n", result == NULL ? "NULL" : result);

	// Edge Case 9: NULL set
	result = ft_strtrim("hello", NULL);
	printf("Edge 9: %s\n", result == NULL ? "NULL" : result);
	free(result);

	return (0);
}*/