/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:06:50 by jziental          #+#    #+#             */
/*   Updated: 2026/07/04 16:04:43 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*memory;
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	memory = (unsigned char *) malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	tmp = memory;
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (memory);
}
//#include <stdio.h>
//#include <stdlib.h>

//typedef struct s_case
//{
//    size_t nmemb;
//    size_t size;
//}	t_case;

//static int	check_case(t_case test)
//{
//    unsigned char	*p1;
//	unsigned char	*p2;
//    size_t			total;
//    size_t			i = 0;

//    p1 = ft_calloc(test.nmemb, test.size);
//	p2 = calloc(test.nmemb, test.size);
//	total = test.nmemb * test.size;
//	if (p1 != NULL && p2 != NULL)
//	{
//	printf("ft_calloc(%zu,%zu) adress:%p \033[32mOK\033[0m\n",
//	test.nmemb, test.size, p1);
//	printf("   calloc(%zu,%zu) adress:%p \033[32mOK\033[0m\n\n"
//	,test.nmemb, test.size, p2);
//	}
//	while (i < total)
//	{
//		if (p2[i] != 0)
//		{
//		printf("^memory was not zeroed at index %zu\n", i);
//		free(p2);
//		return (1);
//		}
//		++i;
//	}
//	free(p1);
//	free(p2);
//	return (0);
//}
//int	main()
//{
//	t_case	tests[] = {{0, 0}, {0, 5}, {5, 0},
//	{1, 1}, {3, 4}, {INT_MAX, 1}, {INT_MAX, 2}};
//	size_t	i = 0;
//	while (i < sizeof(tests) / sizeof(tests[0]))
//	{
//		check_case(tests[i]);
//		i++;
//	}
//    return (0);
//}