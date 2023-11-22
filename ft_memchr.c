/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:07:31 by jacket            #+#    #+#             */
/*   Updated: 2023/11/18 23:51:24 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	ptr = s;
	if (n == 0)
		return (NULL);
	while (*ptr != c && *ptr && --n)
		ptr++;
	if (*ptr == c)
		return (*(&ptr));
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
