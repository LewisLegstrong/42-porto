/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:22:46 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/12 12:22:49 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	unsigned char	coiso;

	coiso = (unsigned char)c; 
	aux = (unsigned char *)s;
	while (n-- != 0)
	{
		if (*aux == coiso)
		{
			return (aux);
		}
		aux++;
	}
	return (NULL);
}
