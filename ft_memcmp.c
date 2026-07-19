/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 11:49:00 by jziental          #+#    #+#             */
/*   Updated: 2026/06/28 13:34:47 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*tmp_s1;
	const unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = s1;
	tmp_s2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char s1[] = "";
//	char s2[] = "";
//	printf ("%d\n", memcmp(s1,s2, 1));
//	printf ("%d\n\n", ft_memcmp(s1,s2, 1));

//	char s3[] = "a"; 
//	char s4[] = "";
//	printf ("%d\n", memcmp(s3,s4, 1));
//	printf ("%d\n\n", ft_memcmp(s3,s4, 1));

//	char s5[] = ""; 
//	char s6[] = "a";
//	printf ("%d\n", memcmp(s5,s6, 0));
//	printf ("%d\n\n", ft_memcmp(s5,s6, 0));

//	char s7[] = "ab\0c"; 
//	char s8[] = "ab\0d";
//	printf ("%d\n", memcmp(s7,s8, 4));
//	printf ("%d\n\n", ft_memcmp(s7,s8, 4));

//	char s9[] = "ac";
//	char s10[] = "aba";
//	printf ("%d\n", memcmp(s9,s10, 3));
//	printf ("%d\n\n", ft_memcmp(s9,s10, 3));

//	char s11[] = "ab";
//	char s12[] = "aca";
//	printf ("%d\n", memcmp(s11,s12, 3));
//	printf ("%d\n\n", ft_memcmp(s11,s12, 3));

//	char s13[] = "aca";
//	char s14[] = "aba";
//	printf ("%d\n", memcmp(s13,s14, 2));
//	printf ("%d\n\n", ft_memcmp(s13,s14, 2));
//	return (0);
//}