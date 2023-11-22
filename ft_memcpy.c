/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:10:18 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/21 13:04:04 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	psrc = src;
	pdest = dest;
	if (n == 0)
		return (NULL);
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

//int main()
//{
//	char arr1[] = "hello how are you";
//	char arr2[17];
//	char arr3[] = "hello how are you";
//	char arr4[17];
//	memcpy(arr1, arr2, 6);
//	ft_memcpy(arr3, arr4, 6);
//	printf("%s\n", arr2);
//	printf("%s\n", arr4);
//}
