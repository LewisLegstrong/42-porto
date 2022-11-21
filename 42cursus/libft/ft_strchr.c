/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:09 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/05 15:42:11 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*aux;

	aux = s;
	while (*aux != '\0')
	{
		if (*aux == c)
		{
			return ((char *)aux);
		}
		aux++;
	}
	if (c == '\0')
		return ((char *)aux);
	return (NULL);
}
