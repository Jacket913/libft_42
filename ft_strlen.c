/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:11:17 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/22 17:13:33 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen (const char *s)
{
	long int	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 0)
		return (NULL);
	return (i);
}

// int main(int ac, char **av)
// {
// 	printf("%ld\n", strlen(av[1]));
// 	printf("%ld\n", ft_strlen(av[1]));
// }
