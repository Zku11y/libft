/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:59:18 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/04 18:44:42 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (!lst || !*lst || !*del)
		return ;
	ptr1 = *lst;
	while (ptr1)
	{
		ptr2 = ptr1->next;
		del(ptr1->content);
		free(ptr1);
		ptr1 = ptr2;
	}
	*lst = NULL;
}
