/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:36:03 by jacket            #+#    #+#             */
/*   Updated: 2024/01/02 21:07:38 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*change;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		if (!(change = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, change);
		lst = lst->next;
	}
	return (newlist);
}
