/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:04:31 by luiduart          #+#    #+#             */
/*   Updated: 2022/12/21 13:04:32 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_node;
	t_list	*something;
	
	if (!lst || !f || !del)
		return (0);
	head_node = ft_lstnew(f(lst->content));
	if (head_node)
		return (0);
	lst = lst->next; 
	while (lst != NULL)
	{
		something = ft_lstnew(f(lst->content));
		if (!something)
		{
			ft_lstclear(&head_node, del);
			return (0);
		}
		ft_lstadd_back(&head_node, something);
		lst = lst->next;
	}
	return (something);
}
