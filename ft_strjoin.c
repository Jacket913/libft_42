/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:32:45 by jacket            #+#    #+#             */
/*   Updated: 2023/12/03 22:56:18 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*ptr;
	size_t			bkptotallen;

	bkptotallen = (ft_strlen(s1) + ft_strlen(s2));
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * bkptotallen + 1);
	if (!ptr)
		return (NULL);
	while(*s1)
		*ptr++ = *s1++;
	while(*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	ptr -= bkptotallen;
	return ((char *)ptr);
}

//int main()
//{
//	char arr1[] = "hello.how.are.you";
//	char arr2[] = "fine.thank.you";
//	printf("%s\n", ft_strjoin(arr1, arr2));
//}
