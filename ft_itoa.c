/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:40:21 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/13 16:36:10 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lencount(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
	{
		return (11);
	}
	else if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	changestr(char *str, int *n)
{
	if (*n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		*n = 1;
	}
	str[0] = '-';
	*n *= -1;
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*str;

	digit = lencount(n);
	str = (char *) malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		*str = '0';
	else if (n < 0)
		changestr(str, &n);
	if (n == -1)
		return (str);
	str[digit] = '\0';
	while (n != 0)
	{
		*(str + --digit) = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
