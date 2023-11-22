/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:22:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/21 16:11:29 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int lenret;

	lenret = strlen(src) + strlen(dst);
	if (size == 0 || strlen(src) == 0 || strlen(dst) == 0)
		return (0);
	size-=strlen(dst);
	dst+=strlen(dst);
	while (--size)
		*dst++ = *src++;
	*dst = '\0';
	return (lenret);
}

int main()
{
	char arr1[] = "hello.how.are.you";
	char arr2[17] = "ooo";
	char arr3[] = "hello.how.are.you";
	char arr4[17] = "ooo";
	printf("%d\n", strlcat(arr2, arr1, 8));
	printf("%s\n", arr2);
	printf("%d\n", ft_strlcat(arr4, arr3, 8));
	printf("%s\n", arr4);
}
