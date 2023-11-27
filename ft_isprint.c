/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:05:17 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:28:49 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

int	ft_isprint(int i)
{
	return (i >= 32 && i <= 126);
}

//int main(void)
//{
//	char c = '3';
//	printf("%d\n", isprint(c));
//	printf("%d", ft_isprint(c));
//}
