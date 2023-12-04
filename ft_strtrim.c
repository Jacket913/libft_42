/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:11:23 by jacket            #+#    #+#             */
/*   Updated: 2023/12/04 00:53:57 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*ptr;
	unsigned char	*ends;
	size_t			bkplen;

	ends = ((unsigned char *)&s1[ft_strlen(s1)]) - 1;
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	while (ends > (unsigned char *)s1 && ft_strchr(set, *ends) != NULL)
		ends--;
	bkplen = (ends - (unsigned char *)s1);
	ptr = (char *)malloc(sizeof(*s1) * (bkplen + 1));
	if (!ptr)
		return (NULL);
	while ((unsigned char *)s1 <= ends)
		*ptr++ = *s1++;
	*ptr = '\0';
	ptr -= bkplen;
	return (ptr);
}

//int main()
//{
//	char arr[] = "hello how are you";
//	char set[] = "heou";
//	printf("%s\n", ft_strtrim(arr, set));
//}
