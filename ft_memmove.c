/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:46 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/21 15:18:51 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	if (n == 0)
		return (NULL);
	if (src < dest)
	{
		psrc = src + n;
		pdest = dest + n;
		while (n--)
			*pdest-- = *psrc--;
	}
	else
	{
		psrc = src;
		pdest = dest;
		while (n--)
			*pdest++ = *psrc++;
	}
	return (dest);
}
