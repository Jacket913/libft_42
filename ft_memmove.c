/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:46 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/22 14:27:57 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	if (n == 0)
		return (NULL);
	if (src < dest)
	{
		psrc = src + n;
		pdest = dest + n;
		while (n--)
			*pdest-- = *psrc--;
	}
	else
	{
		psrc = src;
		pdest = dest;
		while (n--)
			*pdest++ = *psrc++;
	}
	return (dest);
}

//int main()
//{
//	char arr1[] = "hello how are you";
//	char arr2[] = "how are you";
//	//memmove(arr1, arr1[5], 3);
//	//printf("%s\n", arr1);
//	ft_memmove(arr2, arr1, 5);
//	printf("%s\n", arr2);
//}
