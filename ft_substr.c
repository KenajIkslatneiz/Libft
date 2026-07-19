/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 19:53:56 by jziental          #+#    #+#             */
/*   Updated: 2026/07/08 17:43:08 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && *(s + start + i))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
// #include <stdio.h>
// int main()
// {
//     char s[] = "abcd";
//     printf("bcd=%s\n", ft_substr(s, 1, 3));
//     printf("bcd=%s\n", ft_substr(s, 1, 100));
//     printf("=%s\n", ft_substr(s, 100, 1));
//     printf("=%s\n", ft_substr(s, 100, 100));
//     printf("=%s\n", ft_substr(s, 1, 0));
//     printf("=%s", ft_substr("", 1, 1));
//	   printf("=%s", ft_substr(NULL, 1, 1));
//     return (0);
// }
