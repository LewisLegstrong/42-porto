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

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		len;

	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	joined = malloc(sizeof(char) * len - 1);
	if (!joined)
		retun (NULL);
	ft_strlcat(joined, (char *)s1, len);
	ft_strlcat(joined, (char *)s2, len);
	
	return (joined);
}
