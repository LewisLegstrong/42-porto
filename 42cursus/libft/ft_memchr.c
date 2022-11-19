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

void	*memchr(const void *s, int c, size_t n)
{
	char *aux;

	aux = (char *)s;
	while ((*aux != '\0') | (aux <= aux + n))
	{
		if(*aux == c)
		{
			return((char *)aux);
		}
		aux++;
	}
	return(NULL);
}
