/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:07:32 by jacket            #+#    #+#             */
/*   Updated: 2023/12/23 16:26:10 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	bkplen;

	if (!s)
		return (NULL);
	bkplen = len;
	if (start >= ft_strlen(s))
	{
		if (!(ptr = (char *)malloc(sizeof(char))))
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	s += start;
	if (!(ptr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len--)
		*ptr++ = *s++;
	*ptr = '\0';
	ptr -= bkplen;
	return(ptr);
}
