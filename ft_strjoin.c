/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:32:45 by jacket            #+#    #+#             */
/*   Updated: 2023/12/19 19:57:28 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*ptr;
	size_t			bkplen;

	if (!s1 || !s2)
		return (NULL);
	bkplen = (ft_strlen(s1) + ft_strlen(s2));
	ptr = (unsigned char *) malloc(sizeof(char) * bkplen + 1);
	if (!ptr)
		return (NULL);
	while(*s1)
		*ptr++ = *s1++;
	while(*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	ptr -= bkplen;
	return ((char *)ptr);
}
