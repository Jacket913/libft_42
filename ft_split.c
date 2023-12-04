/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:41:33 by jacket            #+#    #+#             */
/*   Updated: 2023/12/04 01:46:22 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int i;
	int nbc;
	int flag;
	char **strings;

	i = 0;
	nbc = 0;
	while (s[i])
	{
		while (s[i])
		{
			if (ft_strchr(c, s[i]) == NULL)
				break;
			i++;
		}
		flag = i;
		while (s[i])
		{
			if (ft_strchr(c, s[i]) == NULL)
				break;
			i++;
		}
		if (i > flag)
			nbc++;
	}
	strings = malloc(sizeof(char *) * nbc);

}
