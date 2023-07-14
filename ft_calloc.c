/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:42:45 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/13 15:49:48 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*firstptr;

	firstptr = malloc(count * size);
	if (!firstptr)
		return (NULL);
	ft_bzero(firstptr, count * size);
	return (firstptr);
}
