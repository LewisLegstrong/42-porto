/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:28:25 by luiduart          #+#    #+#             */
/*   Updated: 2022/12/08 14:58:20 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*aux;

	aux = (char *)s + start;
	substr = malloc(sizeof(char) * len);
	if(!substr)
		return (NULL);
	while(*aux != '\0')
	{
		*substr = *aux;
		substr++;
		aux++;
	}	
	return (substr);
}
