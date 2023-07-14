/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:32:47 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/13 15:48:07 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	result;
	char	*s;

	i = 0;
	s = (char *) src;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen < dstsize)
		result = srclen + dstlen;
	else
		result = srclen + dstsize;
	while (s[i] && (dstlen + 1) < dstsize)
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (result);
}
