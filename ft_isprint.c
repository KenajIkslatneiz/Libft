/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:17:28 by jziental          #+#    #+#             */
/*   Updated: 2026/07/05 17:46:35 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}
//#include <stdio.h>
//int main()
//{
//		printf("return: %d\n", ft_isascii('\0'));
//		printf("return: %d\n", ft_isascii('~'));
//		printf("return: %d\n", ft_isascii(-1));
//}