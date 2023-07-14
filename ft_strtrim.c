/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:19:15 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/13 15:51:31 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		strtind;
	int		endind;
	int		len;

	if (!s1 && !set)
		return (NULL);
	strtind = 0;
	endind = ft_strlen(s1) - 1;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[strtind]) && strtind < len)
		strtind++;
	while (ft_strchr(set, s1[endind]) && 0 <= endind)
		endind--;
	len = endind - strtind + 1;
	str = ft_substr(s1, strtind, len);
	return (str);
}
