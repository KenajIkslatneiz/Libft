/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 20:00:50 by jziental          #+#    #+#             */
/*   Updated: 2026/06/24 16:32:48 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*tmp_dst;
	size_t	i;

	i = 0;
	tmp_dst = dst;
	while (i + 1 < size && src[i])
	{
		*(tmp_dst + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(tmp_dst + i) = '\0';
	return (ft_strlen(src));
}
/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main()
{
	size_t x;
	char dst1[] = "ABC";
	char src1[] = "DEFG";
	printf("dst: %s\nsrc len = %d\n", dst1, 0);

	x = ft_strlcpy(dst1, src1, 0); //ft_strlen(src1) + 1
	printf("dst: %s\nreturn = %li\n", dst1, x);
	//char dst2[] = "EFG2 | $$";
	//char src2[] = "XYZ777";
	//strlcpy(dst2, src2, 3);
	return (0);
}*/