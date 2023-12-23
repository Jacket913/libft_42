/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:00:44 by gmoulin           #+#    #+#             */
/*   Updated: 2023/12/18 22:22:41 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if ((s1 == NULL && s2 == NULL) || n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && n--)
	{
		s1++;
		s2++;
		if (n == 0)
			return(0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
