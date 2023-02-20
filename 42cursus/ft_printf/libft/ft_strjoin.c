/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:28:43 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:28:44 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*aux;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	joined = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	aux = joined;
	ft_memcpy(aux, s1, len1);
	aux = aux + len1;
	ft_memcpy(aux, s2, len2);
	aux = aux + len2;
	*aux = 0;
	return (joined);
}
