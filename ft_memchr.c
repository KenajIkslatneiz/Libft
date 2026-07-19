/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 10:50:40 by jziental          #+#    #+#             */
/*   Updated: 2026/07/05 18:37:19 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp_s;
	unsigned char		uc;
	const unsigned char	*result;
	size_t				i;

	tmp_s = s;
	uc = (unsigned char)c;
	result = NULL;
	i = 0;
	while (i < n)
	{
		if (*(tmp_s + i) == uc)
		{
			result = tmp_s + i;
			return ((void *)result);
		}
		++i;
	}
	if (c == '\0')
		return ((void *)result);
	return ((void *)result);
}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	unsigned char * x1 = ft_memchr("sotme", 't', 111);
//	printf("%s\n", x1);
//	unsigned char * x2 = memchr("sotme", 't', 111);
//	printf("%s\n\n", x2);

//	printf("%p\n", ft_memchr("sotme", '\0', 111));
//	printf("%p\n\n", memchr("sotme", '\0', 111));

//	printf("%p\n", ft_memchr("sotme", 'w', 111));
//	printf("%p\n\n", memchr("sotme", 'w', 111));

//	printf("%p\n", ft_memchr("sotme", 't', 2));
//	printf("%p\n\n", memchr("sotme", 't', 2));

//	printf("%p\n", ft_memchr("sotme", 't', -3));
//	printf("%p\n\n", memchr("sotme", 't', -3));

//	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//	printf("%p\n", (char *)ft_memchr(tab, -1, sizeof(tab)));
//	printf("%p", (char *)memchr(tab, -1, sizeof(tab)));

//	return (0);
//}