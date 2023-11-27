/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:50:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/26 13:28:29 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>

int	ft_isalnum (int i)
{
	return ft_isalpha(i) || ft_isdigit(i);
}

//int main(void)
//{
//	char c = '.';
//	printf("%d\n", isalnum(c));
//	printf("%d", ft_isalnum(c));
//}
