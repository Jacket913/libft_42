/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:10:18 by gmoulin           #+#    #+#             */
/*   Updated: 2023/12/23 13:45:39 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (!dest && !src)
		return (NULL);
	tmp = (unsigned char *) dest;
	while (n--)
		*tmp++ = *((unsigned char *)src++);
	return (dest);
}
