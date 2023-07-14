/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macakmak <macakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:23:06 by macakmak          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:58 by macakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhptr;
	t_list	*tmpnew;
	t_list	*tmpold;
	t_list	*newptr;

	if (!lst || !f || !del)
		return (NULL);
	newhptr = ft_lstnew(f(lst -> content));
	tmpold = lst -> next;
	tmpnew = newhptr;
	while (tmpold)
	{
		newptr = ft_lstnew(f(tmpold -> content));
		if (!newptr)
		{
			ft_lstclear(&newptr, del);
			return (NULL);
		}
		tmpnew -> next = newptr;
		tmpnew = newptr;
		tmpold = tmpold -> next;
	}
	return (newhptr);
}
