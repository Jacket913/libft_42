/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:56:28 by jacket            #+#    #+#             */
/*   Updated: 2023/12/23 15:33:16 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rec_itoa(long nbr, char **buffer)
{
	if (nbr / 10 != 0)
		rec_itoa(nbr / 10, buffer);
	*(*buffer)++ = (nbr % 10) + '0';
}

static size_t		tomalloc(long nbr, int neg)
{
	size_t	size;

	size = 2;
	if (neg == 1)
		size++;
	while (nbr / 10)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		neg;
	long	nbr;
	char	*res;
	char	*ptr;

	neg = 0;
	nbr = n;
	if (nbr < 0)
		neg++;
	if (neg == 1)
		nbr *= -1;
	if (!(res = (char *)malloc(sizeof(char) * (tomalloc(nbr, neg)))))
		return (NULL);
	ptr = res;
	if (neg == 1)
		*res++ = '-';
	rec_itoa(nbr, &res);
	*res = '\0';
	return (ptr);
}
