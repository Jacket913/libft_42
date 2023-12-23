/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:41:33 by jacket            #+#    #+#             */
/*   Updated: 2023/12/23 20:49:04 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	w_count(const char *s, char sep)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == sep)
			s++;
		if (*s)
			count++;
		while (*s && *s != sep)
			s++;
	}
	return (count);
}

static size_t	w_len(const char *s, char sep)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != sep)
		len++;
	return (len);
}

static void	free_arr(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static char	**spl_machine(const char *s, char c, char **arr, size_t w_count)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i < w_count)
	{
		while (s[j] && s[j] == c)
			j++;
		if (!(arr[i] = ft_substr(s, j, w_len(&s[j], c))))
		{
			free_arr(arr, i);
			return (NULL);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	int			word_count;

	if (!s)
		return (NULL);
	word_count = w_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	str = spl_machine(s, c, str, word_count);
	return (str);
}
