/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:29:35 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:29:39 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*aux;
	size_t	i;

	aux = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!aux)
		return (NULL);
	i = 0;
	while (*s)
	{
		aux[i] = f(i, *s);
		i++;
		s++;
	}
	aux[i] = '\0';
	return (aux);
}
