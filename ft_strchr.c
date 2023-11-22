/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:00:47 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/19 00:12:43 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}

// int main(int ac, char **av)
// {
// 	char *ptr1 = strchr(av[1], *av[2]);
// 	char *ptr2 = ft_strchr(av[1], *av[2]);
// 	printf("%p\n", ptr1);
// 	printf("%p\n", ptr2);
// }
