/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:50:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/11/17 13:16:13 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
