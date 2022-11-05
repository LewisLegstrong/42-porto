/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:17:41 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/05 10:17:57 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memcpy(void *dest, const void *src, size_t n)
{
	void *aux1;
	void *aux2;

	aux1 = dest;
	aux2 = src;

	while(aux1 < src + n)
	{
		*aux1 = *aux2;
		aux1++;
		aux2++;
	}
	return (*dest);
}
