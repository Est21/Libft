/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:21:38 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/11 17:58:02 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcptr;
	unsigned char	*dstptr;

	srcptr = (unsigned char *) src;
	dstptr = (unsigned char *) dst;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return ((void *) dstptr);
}
