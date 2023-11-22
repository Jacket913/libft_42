/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:22:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/22 18:25:06 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_ret;
	size_t	len_src;
	size_t	len_dst;

	if (src == NULL)
		len_src = 0;
	if (dst == NULL)
		len_dst = 0;
	len_ret = len_dst + len_src;
	if (size == 0 || len_src == 0)
		return (0);
	size-=strlen(dst);
	dst+=strlen(dst);
	while (--size && size < len_dst)
		*dst++ = *src++;
	*dst = '\0';
	return (len_ret);
}

int main()
{
	char arr1[] = "hello.how.are.you";
	char arr2[17] = "ooo";
	char arr3[] = "hello.how.are.you";
	char arr4[17] = "ooo";

	char nique[] = "Bleu";
	char *coucou = NULL;

	//printf("%d\n", strlcat(coucou, nique, 8));
	//printf("%s\n", coucou);
	printf("%d\n", ft_strlcat(coucou, nique, 8));
	printf("%s\n", coucou);


	printf("%d\n", strlcat(arr2, arr1, ULLONG_MAX));
	printf("%s\n", arr2);
	printf("%d\n", ft_strlcat(arr4, arr3, ULLONG_MAX));
	printf("%s\n", arr4);
}
