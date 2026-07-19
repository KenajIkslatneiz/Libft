/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:49:57 by jziental          #+#    #+#             */
/*   Updated: 2026/07/17 19:33:09 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	from_set(char s, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && from_set(s1[i], set))
		i++;
	len = ft_strlen(s1);
	while (len > i && from_set(s1[len - 1], set))
		len--;
	trimmed = malloc(len - i + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_memmove(trimmed, s1 + i, len - i);
	trimmed[len - i] = '\0';
	return (trimmed);
}
