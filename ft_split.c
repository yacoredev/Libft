/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabaadi <yabaadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 07:11:05 by yabaadi           #+#    #+#             */
/*   Updated: 2026/10/26 11:05:25 by yabaadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_mem(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

static size_t	count_words(char const *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (count);
}

static char	*put_words(char const **s, char c, char **arr, size_t i)
{
	char		*str;
	char const	*end;

	while (**s == c)
		(*s)++;
	end = *s;
	while (*end && *end != c)
		end++;
	str = ft_substr(*s, 0, end - *s);
	if (!str)
	{
		free_mem(arr, i);
		return (NULL);
	}
	*s = end;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	**tmp;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = count_words(s, c) + 1;
	arr = malloc(size * sizeof(char *));
	if (!arr)
		return (NULL);
	tmp = arr;
	i = 0;
	while (i < size - 1)
	{
		*tmp = put_words(&s, c, arr, i);
		if (!*tmp)
			return (NULL);
		tmp++;
		i++;
	}
	*tmp = NULL;
	return (arr);
}
