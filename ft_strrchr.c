/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:42:56 by jacket            #+#    #+#             */
/*   Updated: 2023/11/26 09:01:50 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		lens;

	lens = strlen(s);
	s += lens;
	while (s-- && *s >= lens)
	{
		if (*s == c)
			return ((char *) s);
	}
	return (NULL);
}

//int main()
//{
//	char arr[] = "xello.how.are.you";
//	int c = 'u';
//	printf("%s\n", strrchr(arr, c));
//	printf("%s\n", ft_strrchr(arr, c));
//}
