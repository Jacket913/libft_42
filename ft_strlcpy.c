/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:38:17 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/23 16:18:19 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (size == 0 || lensrc == 0)
		return (lensrc);
	while (*src && --size)
		*dst++ = *src++;
	*dst = '\0';
	return (lensrc);
}

//int main()
//{
//	char arr1[] = "hello.how.are.you";
//	char arr2[17];
//	char arr3[] = "hello.how.are.you";
//	char arr4[17];
//	printf("%d\n", strlcpy(arr2, arr1, -1));
//	printf("%s\n", arr2);
//	printf("%d\n", ft_strlcpy(arr4, arr3, -1));
//	printf("%s\n", arr4);
//}
