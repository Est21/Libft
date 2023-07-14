/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:18:12 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/11 18:10:56 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	int		i;

	ch = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			ch = (char *)(s + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	if (ch)
		return (ch);
	else
		return (NULL);
}
