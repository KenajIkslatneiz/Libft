/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:38:47 by jziental          #+#    #+#             */
/*   Updated: 2026/07/10 17:48:56 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	new_s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_s[i] = s2[j];
		i++;
		j++;
	}
	new_s[i] = '\0';
	return (new_s);
}
// #include <stdio.h>
// int main()
// {
//	char *p = ft_strjoin("avx", "dX2");
//	printf("avxdx2=%s\n", p);
//	char *p1 = ft_strjoin("\0", "lol");
//	printf("lol=%s\n", p1);
//	char *p2 = ft_strjoin("lol","\0");
//	printf("lol=%s\n", p2);
//	char *p3 = ft_strjoin(NULL, "lol");
//	printf("lol=%s\n", p3);
//	char *p4 = ft_strjoin(NULL, "\0");
//	printf(" =%s\n", p4);
//	char *p5 = ft_strjoin("\0", NULL);
//	printf(" =%s\n", p5);
//	char *p6 = ft_strjoin("lol", NULL);
//	printf("lol=%s\n", p6);
//	char *p7 = ft_strjoin(NULL, NULL);
//	printf("null=%s\n", p7);
// }