/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:00:44 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/21 13:55:18 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	*ps1;
	unsigned int	*ps2;

	ps1 = s1;
	ps2 = s2;
	if (n == 0)
		return (0);
	while (*ps1 == *ps2 && *ps1 && n--)
		ps1++ && ps2++;
	return (*ps1 - *ps2);
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
