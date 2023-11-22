/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:58:05 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/17 13:08:57 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
