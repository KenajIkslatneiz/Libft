/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jziental <jziental@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 12:46:34 by jziental          #+#    #+#             */
/*   Updated: 2026/07/12 15:02:19 by jziental         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;
	int		i;

	num = n;
	len = num_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = len - 1;
	while (num >= 10)
	{
		str[i--] = num % 10 + '0';
		num /= 10;
	}
	str[i] = num + '0';
	return (str);
}
//#include <limits.h>
//#include <stdio.h>
//int main()
//{
//	printf("%d => %s\n",INT_MIN, ft_itoa(INT_MIN));
//	printf("%d => %s\n",INT_MAX, ft_itoa(INT_MAX));
//	printf("%d => %s\n",INT_MIN, ft_itoa(0));
//	printf("%d => %s\n",INT_MIN, ft_itoa(0));
//	return (0);
//}