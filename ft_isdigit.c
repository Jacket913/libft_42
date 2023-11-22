/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:43:42 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/17 13:08:57 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
