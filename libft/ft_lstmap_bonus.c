/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:05:51 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/06 15:49:48 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*s;

	t = lst;
	if (!lst || !f || !del)
		return (0);
	t = ft_lstnew(f(lst->content));
	if (!t)
		return (0);
	s = t;
	lst = lst->next;
	while (lst)
	{
		t->next = ft_lstnew(f(lst->content));
		if (!t->next)
		{
			ft_lstclear(&s, del);
			return (0);
		}
		t = t->next;
		lst = lst->next;
	}
	t->next = NULL;
	return (s);
}
