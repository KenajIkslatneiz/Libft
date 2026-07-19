/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:59:37 by jziental          #+#    #+#             */
/*   Updated: 2026/06/27 19:02:29 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}
//#include <stdio.h>
//int main()
//{
//	char dest[] = "ABCDaaaaaaaaaaaa3";
//	char src[] = "EFGHIJKLMN |";
//	ft_memcpy(dest, src, 12);
//	printf("%s\n", dest);
//	//char dest1[] = "ABCDaaaaaaaaaaaa3";
//	//char src1[] = "EFGHIJKLMN |";
//	//memcpy(dest1, src1, 12);
//	//printf("%s\n", dest1);
//	return (0);
//}