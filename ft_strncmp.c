/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:16:27 by jacket            #+#    #+#             */
/*   Updated: 2023/11/19 00:53:41 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && --n)
		s1++ && s2++;
	return (*s1 - *s2);
}

// int main()
// {
// 	char arr1[] = "heello";
// 	char arr2[] = "hello";
// 	printf("%d\n", strncmp(arr1, arr2, 2));
// 	printf("%d\n", ft_strncmp(arr1, arr2, 2));
// }
