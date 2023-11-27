/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:56:16 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:10:23 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

int	ft_atoi(const char *nptr)
{
	size_t	nb;
	size_t	neg;

	nb = 0;
	neg = (*nptr == '-') ? -1 : 1;
	if (neg == -1 || *nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (ft_isdigit(*nptr) == 0)
			return(0);
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	return (nb * neg);
}

//int main(int ac, char **av)
//{
//	printf("%d\n", atoi(av[1]));
//	printf("%d\n", ft_atoi(av[1]));
//}
