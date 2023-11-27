/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:58:05 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:28:40 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

int	ft_isascii(int i)
{
	return (i >= 0 && i <= 127);
}

//int main(void)
//{
//	char c = '3';
//	printf("%d\n", isascii(c));
//	printf("%d", ft_isascii(c));
//}
