/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:10:01 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:28:33 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

int	ft_isalpha(int i)
{
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}

//int main(void)
//{
//	char c = '3';
//	printf("%d\n", isalpha(c));
//	printf("%d", ft_isalpha(c));
//}
