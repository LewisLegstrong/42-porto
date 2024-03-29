/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:28:09 by luiduart          #+#    #+#             */
/*   Updated: 2022/12/08 14:28:31 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*string;
	char	*aux;
	char	*aux2;
	int		i;

	i = ft_strlen((char *)s);
	aux = (char *)s;
	string = malloc(sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	aux2 = string;
	while (*aux != '\0')
	{
		*aux2 = *aux;
		aux2++;
		aux++;
	}
	*aux2 = '\0';
	return (string);
}
