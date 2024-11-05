/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:36:32 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/03 12:20:36 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first;
	void	*content;

	if (!(*f) || !lst || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, node);
		lst = lst->next;
	}
	return (first);
}

/* 	t_list	*list;
	t_list	*n;
	void	*data;

	if (!lst || !del || !f)
		return (NULL);
	list = NULL;
	while (lst)
	{
		data = (*f)(lst->content);
		if(!data)
		{

		}
		n = ft_lstnew(data);
		if (!n)
		{
			free(data);
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&list, n);
		lst = lst->next;
	}
	return (list); */