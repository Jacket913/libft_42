/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:07:31 by jacket            #+#    #+#             */
/*   Updated: 2023/11/26 13:52:43 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	//const char	*ptr;

	//ptr = s;
	//if (n == 0)
	//	return (NULL);
	//while (*ptr != c && *ptr && --n)
	//	ptr++;
	//if (*ptr == c)
	//	return (ptr);
	while (n--)
	{
		if (*(unsigned char *) s == (unsigned char) c)
			return ((unsigned char *) s);
		s++;
	}
	return (NULL);
}

// int main()
// {
// 	char arr1[18] = "hello how are you";
// 	char *ptr1 = memchr(arr1, 'w', 8);
// 	char *ptr2 = ft_memchr(arr1, 'w', 8);
// 	printf("%p\n", ptr1);
// 	printf("%p\n", ptr2);
// }
