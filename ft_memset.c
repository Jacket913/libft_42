/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:15:53 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:34:30 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = (unsigned char) c;
	return (s);
}

// int main()
// {
// 	char arr1[18] = "hello how are you";
// 	char arr2[18] = "hello how are you";
// 	memset(arr1, '*', 6);
// 	ft_memset(arr2, '*', 6);
// 	printf("%s\n", arr1);
// 	printf("%s\n", arr2);
// }
