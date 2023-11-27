/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:46 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:46:37 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (!dest || !src)
		return (NULL);
	tmp = (unsigned char *) malloc(sizeof (unsigned char) * n);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free (tmp);
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
