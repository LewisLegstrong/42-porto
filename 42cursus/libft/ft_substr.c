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

static int	slen(char *string, uint start, size_t len)
{
	size_t	i;

	i = 0;
	while (*string && start)
	{
		string++;
		start--;
	}
	while (*string && i < len)
	{
		string++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (start >= ft_strlen((char *)s))
	{
		substr = malloc(1);
		*substr = 0;
		return (substr);
	}
	substr = malloc(sizeof(char) * slen((char *)s, start, len) + 1);
	if (!substr)
		return (NULL);
	while (s[start + i] != '\0' && len != 0)
	{
		substr[i] = s[i + start];
		i++;
		len--;
	}	
	substr[i] = '\0';
	return (substr);
}
