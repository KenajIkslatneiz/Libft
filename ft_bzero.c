/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:42:01 by jziental          #+#    #+#             */
/*   Updated: 2026/07/04 16:27:13 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

//static void	print_arr(int s[], int len)
//{
//	int		i;
//	char	c;

//	i = 0;
//	while (len > 0)
//	{
//		c = '0' + s[i];
//		write(1, &c, 1);
//		i++;
//		len--;
//	}
//	write(1, "\n", 1);
//}

void	*ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *) s = '\0';
		s++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	int s1[] = {1, 2, 4};
	print_arr(s1, 3);
	ft_bzero(s1, 3*sizeof(int));
	print_arr(s1, 3);
	return (0);
}*/