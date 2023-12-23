/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:22:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/12/23 17:06:41 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	dlen;
	size_t	i;

	if (size == 0)
		return (0);
	ret = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (dlen < size)
		ret += dlen;
	else
		ret += size;
	if (size > 0)
	{
		while (src[i] && (i + dlen) < size - 1)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = '\0';
	}
	return (ret);
}
