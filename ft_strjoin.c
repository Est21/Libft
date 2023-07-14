/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:01:46 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/13 15:48:04 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1len;
	unsigned int	s2len;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *) malloc(sizeof(char) *(s1len + s2len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1len + 1);
	ft_strlcat(str, s2, s1len + s2len + 1);
	return (str);
}
