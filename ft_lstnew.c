/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:17:11 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/14 12:03:50 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *) malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp -> content = content;
	tmp -> next = NULL;
	return (tmp);
}
