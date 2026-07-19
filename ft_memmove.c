/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:46:10 by jziental          #+#    #+#             */
/*   Updated: 2026/06/28 11:00:18 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
//forward coping if src is after dest 
//backward coping if not, so src will be copied correctly
{
	size_t				i;
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	i = 0;
	temp_dest = dest;
	temp_src = src;
	if (dest == src || n == 0)
		return (dest);
	if (temp_src > temp_dest)
	{
		while (i < n)
		{
			*(temp_dest + i) = *(temp_src + i);
			i++;
		}
	}
	else if (temp_src < temp_dest)
	{
		while (n > 0)
		{
			*(temp_dest + n - 1) = *(temp_src + n - 1);
			n--;
		}
	}
	return (dest);
}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char dest[] = "ABC1 | %%";
//	char src[] = "DBC233";
//	ft_memmove(dest, src, 4);
//	if (src==src){};
//	printf("ft_memmove: %s\n\n", dest);

//	char dest1[] = "ABC1 | %%";
//	char src1[] = "DBC233";
//	memmove(dest1, src1, 4);
//	if (src1==src1){}
//	printf("   memmove: %s\n", dest1);
//	return (0);
//}
