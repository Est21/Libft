/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:40:53 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/11 17:03:08 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && (ptr1[i] == ptr2[i]))
		i++;
	return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
}
