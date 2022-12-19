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
	char			*substr;
	unsigned int	i;

	i = 0;
	if (start >= ft_strlen((char *)s))
		return (NULL);
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while(s[start+i] != '\0' && len != 0)
	{
		substr[i] = s[i+start];
		i++;
		len--;
	}	
	substr[i] = '\0';
	return (substr);
}
