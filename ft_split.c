/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:41:33 by jacket            #+#    #+#             */
/*   Updated: 2023/12/18 20:47:49 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

size_t	w_count(const char *s, char sep)
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

char	*tempcpy(const char *s, char sep)
{
	char	*temp;
	int		j;
	int		ti;

	j = 0;
	while (s[j] && s[j] != sep)
		j++;
	temp = malloc(sizeof(char *) * (j + 1));
	if (!temp)
		return (NULL);
	while (ti < j)
		temp[ti++] = *s;
	temp[ti] = 0;
	return (temp);
}

char	**free_all(char ***s, int i)
{
	while (--i >= 0)
		free((*s)[i]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**strings;
	//char		**ptr;
	size_t		i;
	size_t		wcount;

	if (!s || !(strings = malloc(sizeof(char *) * (w_count(s, c) + 1))))
		return (NULL);
	wcount = w_count(s, c);
	//ptr = *strings;
	i = 0;
	while (i < wcount)
	{
		*strings = tempcpy(s, c);
		if (!strings)
			return (free_all(&strings, i));
		i++;
	}
	return (strings);
}

//int main()
//{
//	char test[] = "..Hello.how..are...";
//	char res = ft_split(test, '.');
//	printf("%d\n", res);
//}
