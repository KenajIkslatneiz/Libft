/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 13:35:45 by jziental          #+#    #+#             */
/*   Updated: 2026/07/06 19:37:25 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	const char	*tmp_big;
	const char	*tmp_little;

	i = 0;
	tmp_big = big;
	tmp_little = little;
	if (*little == '\0')
		return ((char *) big);
	while (i < len && tmp_big[i])
	{
		if (tmp_little[0] == tmp_big[i])
		{
			if (ft_strncmp(tmp_big + i, tmp_little, ft_strlen(tmp_little)) == 0
				&& ft_strlen(little) + i <= len)
			{
				return ((char *)(tmp_big + i));
			}
		}
		i++;
	}
	return (NULL);
}
//#include <stdio.h>
//#include <bsd/string.h>
//#include <string.h>
//int main()
//{
//	const char *largestring = "Foo Bar Baz"; //
//	const char *smallstring = "Baz";
//	char *ptr = strnstr(largestring, smallstring, 12);
//	char *ptr1 = ft_strnstr(largestring, smallstring, 12);
//	printf("%s", ptr);
//	printf("\n%s\n\n", ptr1);

//	const char *b2 = "Common Core";
//	const char *l2 = "\0";
//	char *ptr2 = strnstr(b2, l2, 8);
//	char *ptr3 = ft_strnstr(b2, l2, 8);
//	printf("%s", ptr2);
//	printf("\n%s\n\n", ptr3);

//	const char *b3 = "Common Core";
//	const char *l3 = "Commox";
//	char *ptr4 = strnstr(b3, l3, 8);
//	char *ptr5 = ft_strnstr(b3, l3, 8);
//	printf("%s", ptr4);
//	printf("\n%s\n\n", ptr5);

//	const char *b4 = "Common Core";
//	const char *l4 = "/0C";
//	char *ptr6 = strnstr(b4, l4, 8);
//	char *ptr7 = ft_strnstr(b4, l4, 8);
//	printf("%s", ptr6);
//	printf("\n%s\n\n", ptr7);

//	const char *b5 = "Common\0 Core";
//	const char *l5 = "Core";
//	char *ptr8 = strnstr(b5, l5, 8);
//	char *ptr9 = ft_strnstr(b5, l5, 8);
//	printf("%s", ptr8);
//	printf("\n%s\n\n", ptr9);

//	const char *b6 = "Common Core";
//	const char *l6 = "Core";
//	char *ptr10 = strnstr(b6, l6, 12);
//	char *ptr11 = ft_strnstr(b6, l6, 12);
//	printf("%s", ptr10);
//	printf("\n%s\n\n", ptr11);

//	const char *b7 = "Common Core";
//	const char *l7 = "Core";
//	char *ptr12 = strnstr(b7, l7, 0);
//	char *ptr13 = ft_strnstr(b7, l7, 0);
//	printf("%s", ptr12);
//	printf("\n%s\n\n", ptr13);

//	const char *b8 = "Common Core";
//	const char *l8 = "";
//	char *ptr14 = strnstr(b8, l8, 0);
//	char *ptr15 = ft_strnstr(b8, l8, 0);
//	printf("%s", ptr14);
//	printf("\n%s\n\n", ptr15);

//	const char *b9 = "Common Core";
//	const char *l9 = "";
//	char *ptr16 = strnstr(b9, l9, 0);
//	char *ptr17 = ft_strnstr(b9, l9, 0);
//	printf("%s", ptr16);
//	printf("\n%s\n\n", ptr17);

//	const char *b11 = "Common Core";
//	const char *l11 = "Cored";
//	char *ptr18 = strnstr(b11, l11, 12);
//	char *ptr19 = ft_strnstr(b11, l11, 12);
//	printf("%s", ptr18);
//	printf("\n%s\n\n", ptr19);

//	const char *b12 = "Common Core";
//	const char *l12 = "Cored";
//	char *ptr21 = strnstr(b12, l12, 12);
//	char *ptr20 = ft_strnstr(b12, l12, 12);
//	printf("%s", ptr21);
//	printf("\n%s\n\n", ptr20);

//	const char *b13 = "HelloWorld";
//	const char *l13 = "World";
//	char *ptr22 = strnstr(b13, l13, 10);
//	char *ptr23 = ft_strnstr(b13, l13, 10);
//	printf("%s", ptr22);
//	printf("\n%s\n\n", ptr23);

//	const char *b14 = "lorem ipsum dolor sit amet";
//	const char *l14 = "lorem";
//	char *ptr24 = strnstr(b14, l14, 15);
//	char *ptr25 = ft_strnstr(b14, l14, 15);
//	printf("%s", ptr24);
//	printf("\n%s\n\n", ptr25);

//	const char *b15 = "lorem ipsum dolor sit amet";
//	const char *l15 = "ipsum";
//	char *ptr26 = strnstr(b15, l15, 15);
//	char *ptr27 = ft_strnstr(b15, l15, 15);
//	printf("%s", ptr26);
//	printf("\n%s\n\n", ptr27);

//	const char *b16 = "lorem ipsum dolor sit lorem ipsum dolor";
//	const char *l16 = "ipsum";
//	char *ptr28 = strnstr(b16, l16, 35);
//	char *ptr29 = ft_strnstr(b16, l16, 35);
//	printf("%s", ptr28);
//	printf("\n%s\n\n", ptr29);

//	const char *b17 = "lorem ipsum dolor sit amet";
//	const char *l17 = "dolor";
//	char *ptr30 = strnstr(b17, l17, 17);
//	char *ptr31 = ft_strnstr(b17, l17, 17);
//	printf("%s", ptr30);
//	printf("\n%s\n\n", ptr31);

//return (0);
//}