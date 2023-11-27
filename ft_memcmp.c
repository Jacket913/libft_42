/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:00:44 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 14:01:40 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (s1 == NULL && s2 == NULL || n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && n--)
	{
		s1++ && s2++;
		if (n == 0)
			return(0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

//int main()
//{
//	char arr1[18] = "hello how are you";
//	char arr2[18] = "hello how are you";
//	memset(arr1, '*', 6);
//	ft_memset(arr2, '*', 6);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}
