/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 15:06:09 by jziental          #+#    #+#             */
/*   Updated: 2026/07/15 17:16:34 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapstr;
	int		i;

	if (!f)
		return (NULL);
	i = 0;
	mapstr = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (mapstr == NULL)
		return (NULL);
	while (s[i])
	{
		mapstr[i] = f(i, s[i]);
		i++;
	}
	mapstr[i] = '\0';
	return (mapstr);
}
