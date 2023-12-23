/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:41:33 by jacket            #+#    #+#             */
/*   Updated: 2023/12/23 16:01:17 by jacket           ###   ########.fr       */
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

char		*allocate_strndup(const char *s, char c)
{
	size_t	len;
	size_t	i;
	char	*res;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	if (!(res = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (*s && i++ < len)
		*res++ = *s++;
	*res = '\0';
	return (res);
}

static char		**w_cpy(char **res, const char *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[i++] = allocate_strndup(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
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
	if (w_cpy(str, s, c) == NULL)
	{
		while (--word_count >= 0)
			free(str[word_count]);
		free(str);
		return (NULL);
	}
	return (str);
}
