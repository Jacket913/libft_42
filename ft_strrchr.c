/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:42:56 by jacket            #+#    #+#             */
/*   Updated: 2023/11/19 00:02:15 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = strlen(s) - 1;
	while (i--)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
	}
	return (NULL);
}

// int main(int ac, char **av)
// {
// 	printf("%s\n", strrchr(av[1], *av[2]));
// 	printf("%s\n", ft_strrchr(av[1], *av[2]));
// }
