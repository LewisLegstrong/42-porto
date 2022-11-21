/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:09:56 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/05 15:10:04 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*aux;

	aux = s;
	while (aux < (unsigned char *)s + n)
	{
		*aux = c;
		aux++;
	}
	return (s);
}
