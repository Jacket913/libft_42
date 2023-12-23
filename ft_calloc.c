/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:56:46 by jacket            #+#    #+#             */
/*   Updated: 2023/12/23 13:29:11 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	if (!(ptr = (void *) malloc(nmemb * size)))
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
