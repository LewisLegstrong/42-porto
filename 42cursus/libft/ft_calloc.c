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

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	coiso = (unsigned char *)malloc(nmemb*size);
	if (coiso == NULL)
		return (NULL);
	while (i <= nmemb*size)
	{
		coiso[i] = '\0';
		i++;
	}
	return (coiso);
}
