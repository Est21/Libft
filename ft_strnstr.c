/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:46:38 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/09 17:53:27 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (i < len && haystack[i] == needle[j] && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)(haystack + i - j));
		i = i - j + 1;
	}
	return (NULL);
}
