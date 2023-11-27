/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:35:23 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:29:38 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr;
	const char	*slittle;

	slittle = little;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (--len)
	{
		little = slittle;
		if (*big == *little)
			ptr = big;
		while (*big == *little)
		{
			big++ && little++;
			if (*little == '\0')
				return ((char *)ptr);
		}
		if (*big != *little)
			big++;
	}
	return (NULL);
}

//int main()
//{
//	char arr1[] = "hello how are you";
//	char arr2[] = "how";
//	printf("%s\n", strnstr(arr1, arr2, 11)); //This bitch fucking segfaults, how.
//	printf("%s\n", ft_strnstr(arr1, arr2, 19));
//}
