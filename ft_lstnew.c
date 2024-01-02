/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:11:44 by jacket            #+#    #+#             */
/*   Updated: 2024/01/02 17:18:05 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
