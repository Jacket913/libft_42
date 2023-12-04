/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:22:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/12/03 19:37:19 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lenret;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	lenret = (ft_strlen(src) + ft_strlen(dst));
	while (*dst && size--)
		dst++;
	while (*src && --size)
		*dst++ = *src++;
	*dst = '\0';
	return (lenret);
}

//int main()
//{
//	char arr1[] = "hello.how.are.you";
//	char arr2[17] = "ooo";
//	char arr3[] = "hello.how.are.you";
//	char arr4[17] = "ooo";

//	printf("%d\n", strlcat(arr2, arr1, ULLONG_MAX));
//	printf("%s\n", arr2);
//	printf("%d\n", ft_strlcat(arr4, arr3, ULLONG_MAX));
//	printf("%s\n", arr4);
//}
