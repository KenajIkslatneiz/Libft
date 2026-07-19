/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:14:53 by jziental          #+#    #+#             */
/*   Updated: 2026/06/21 20:29:03 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
static void	print_arr(int s[], int len)
{
	int	i;
	char c;

	i = 0;
	while (len > 0)
	{
		c = '0' + s[i];
		write(1, &c, 1);
		i++;
		len--;
	}
	write(1, "\n", 1);
}*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n > 0)
	{
		*(tmp + n - 1) = (unsigned char) c;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
int main()
{
	int s1[] = {1, 2, 4};
	print_arr(s1, 3);
	ft_memset(s1, '\0' + 2, 3*sizeof(int));
	print_arr(s1, 3);
	return (0);
}*/