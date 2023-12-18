/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:56:28 by jacket            #+#    #+#             */
/*   Updated: 2023/12/18 20:45:27 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

void	rec_itoa(int nbr, char **buffer)
{
	if (nbr / 10 != 0)
		rec_itoa(nbr / 10, buffer);
	*(*buffer)++ = (nbr % 10) + '0';
}

int		tomalloc(int n, int neg)
{
	size_t	size;

	size = neg == 1 ? 2 : 1;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		neg;
	char	*res;
	char	*ptr;

	neg = n < 0 ? 1 : 0;
	if (!(res = (char *)malloc(sizeof(char *) * (tomalloc(n, neg)))))
		return (NULL);
	if (neg == 1)
		n *= -1;
	ptr = res;
	if (neg == 1)
		*res++ = '-';
	rec_itoa(n, &res);
	*res = '\0';
	return (ptr);
}

//int main()
//{
//	int one = 0;
//	char *res = ft_itoa(one);
//	printf("%s\n", res);
//}
