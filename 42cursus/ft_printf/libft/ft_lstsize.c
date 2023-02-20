/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:03:04 by luiduart          #+#    #+#             */
/*   Updated: 2022/12/21 13:03:07 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstsize;

	lstsize = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lstsize++;
		lst = lst->next;
	}
	return (lstsize);
}
