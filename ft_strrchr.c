/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 17:42:26 by jziental          #+#    #+#             */
/*   Updated: 2026/07/17 19:19:28 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last;
	int			len;

	c = (char) c;
	i = 0;
	last = NULL;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] == c)
			last = s + i;
		i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	return ((char *) last);
}
