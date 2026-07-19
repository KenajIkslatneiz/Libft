/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:48:07 by jziental          #+#    #+#             */
/*   Updated: 2026/06/26 19:35:32 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (dst_len + 1 + i < size && src[i])
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	if (dst_len < size)
		*(dst + dst_len + i) = '\0';
	if (dst_len >= size)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + dst_len);
}
/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main()
{
	size_t x;
	char dst1[9] = "A|B|C";
	char src1[] = "567";
	printf("dst: %s\nsrc len = %ld\n", dst1, ft_strlen(dst1) + ft_strlen(src1));
	x = ft_strlcat(dst1, src1, ft_strlen(dst1)-1);
	printf("then dst: %s\nreturn = %li\n\n", dst1, x);

	char dst2[9] = "A|B|C";
	char src2[] = "567";
	printf("dst: %s\nsrc len = %ld\n", dst2, ft_strlen(dst2) + ft_strlen(src2));
	x = strlcat(dst2, src2, ft_strlen(dst2)-1);
	printf("then dst: %s\nreturn = %li\n", dst2, x);
	return (0);
}*/