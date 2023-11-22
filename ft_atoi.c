/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:56:16 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/22 16:41:46 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *nptr)
{

	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}

//int main(int ac, char **av)
//{
//	printf("%s\n", atoi(av[1]));
//	printf("%s\n", ft_atoi(av[2]));
//}
