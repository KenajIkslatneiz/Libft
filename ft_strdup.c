/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 15:01:52 by jziental          #+#    #+#             */
/*   Updated: 2026/07/04 16:05:56 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s)+1;
	s_dup = malloc(s_len);
	if (s_dup != NULL)
	{
		s_dup = ft_memmove(s_dup, s, s_len);
		return (s_dup);
	}
	return (NULL);
}
//#include <stdio.h>
//int main()
//{
//	const char	*s[] = {"dup", "\0", "adsasdasdasdafwefwefes", NULL};
//	size_t i = 0;
//	char *s_dup_org[sizeof(s)/sizeof(s[0])];
//	char *s_dup_ft[sizeof(s)/sizeof(s[0])];
//	while (s[i])
//	{
//		s_dup_org[i] = strdup(s[i]);
//		s_dup_ft[i] = ft_strdup(s[i]);
//		printf("s(%s) adress:%p -> s_dup = %s, adress:%p\n"
//			, s[i], s[i], s_dup_org[i], s_dup_org[i]);
//		printf("s(%s) adress:%p -> s_dup = %s, adress:%p\n\n",
//			 s[i], s[i], s_dup_ft[i], s_dup_ft[i]);
//		free(s_dup_org[i]);
//		free(s_dup_ft[i]);
//		i++;
//	}
//	while (s[i])
//	{

//	i++;
//	}
//	return (0);
//}