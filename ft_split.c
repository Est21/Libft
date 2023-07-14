/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:20:15 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/14 17:10:06 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	wordcounter(char const *s, char c)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			len++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char			**splitlist;
	unsigned int	i;
	unsigned int	j;
	unsigned int	wordorder;

	splitlist = (char **) malloc(sizeof(char *) * (wordcounter(s, c) + 1));
	if (!splitlist)
		return (NULL);
	i = 0;
	wordorder = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		if (wordcounter(s, c) == wordorder)
			break ;
		splitlist[wordorder++] = ft_substr(s, i, j - i);
		i = j;
	}
	splitlist[wordorder] = NULL;
	return (splitlist);
}
