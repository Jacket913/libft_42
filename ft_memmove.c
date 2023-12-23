/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:55:46 by gmoulin           #+#    #+#             */
/*   Updated: 2023/12/23 16:22:13 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*destret;

	if (!dest && !src)
		return (NULL);
	destret = dest;
	if (src < dest)
	{
		src += (n - 1);
		dest += (n - 1);
		while (n--)
			*(char *)dest-- = *(char *)src--;
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (destret);
}
