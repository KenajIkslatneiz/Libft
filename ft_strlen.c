/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:43:15 by jziental          #+#    #+#             */
/*   Updated: 2026/07/10 17:48:33 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
//#include <stdio.h>
//int main()
//{
//printf("return: %ld\n", 
//ft_strlen("That's precisely 42 characters long string"));
//printf("return: %ld\n", strlen(NULL));
//}