/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:05:17 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/17 13:08:57 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
