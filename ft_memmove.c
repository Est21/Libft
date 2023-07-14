/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:45:01 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/11 19:52:37 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*srcptr;
	unsigned char	*dstptr;

	srcptr = (unsigned char *) src;
	dstptr = (unsigned char *) dst;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (0 < len--)
			dstptr[len] = srcptr[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
	}
	return (dst);
}
