/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:45:46 by jacket            #+#    #+#             */
/*   Updated: 2023/11/26 13:28:23 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = 0;
	}
}

// int main()
// {
// 	char arr1[] = "hello";
// 	char arr2[] = "hello";
// 	bzero(arr1, 2);
// 	ft_bzero(arr2, 2);
// 	printf("%s\n", arr1);
// 	printf("%s\n", arr2);
// }
