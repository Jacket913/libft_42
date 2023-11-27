/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:11:17 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:29:29 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen (const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

//int main()
//{
//	char arr[12];
//	printf("%ld\n", strlen(arr));
//	printf("%ld\n", ft_strlen(arr));
//}
