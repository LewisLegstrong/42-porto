/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:27:50 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:27:52 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*coiso;
	size_t	i;

	i = nmemb*size;
	coiso = malloc(i);
	if (!coiso)
		return (NULL);
	ft_memset(coiso, 0, i);
	return (coiso);
}
