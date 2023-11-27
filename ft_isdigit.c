/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:43:42 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:28:44 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

int	ft_isdigit (int i)
{
	return (i >= '0' && i <= '9');
}

//int main(void)
//{
//	char c = '3';
//	printf("%d\n", isdigit(c));
//	printf("%d", ft_isdigit(c));
//}
