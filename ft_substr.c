/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:07:32 by jacket            #+#    #+#             */
/*   Updated: 2023/12/03 22:55:45 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*ptr;
	size_t			bkplen;

	bkplen = len;
	if (!s)
		return (NULL);
	s += start;
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	while (len--)
		*ptr++ = *s++;
	ptr -= bkplen;
	return((char *)ptr);
}

//int main()
//{
//	char arr[] = "hello how are you";
//	printf("%s\n", ft_substr(arr, 3, 5));
//}
