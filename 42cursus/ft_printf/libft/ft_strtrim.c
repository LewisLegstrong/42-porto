/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:28:57 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:28:59 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set_str)
{
	char	*aux;

	aux = (char *)set_str;
	while (*aux != '\0')
	{	
		if (c == *aux)
			return (1);
		aux++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*trimmmmed;
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	j = ft_strlen((char *)s1);
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (j > i && is_set(s1[j - 1], set))
		j--;
	trimmmmed = malloc (sizeof (char) * (j - i + 1));
	if (!trimmmmed)
		return (NULL);
	z = 0;
	while (i < j)
		trimmmmed[z++] = s1[i++];
	trimmmmed[z] = 0;
	return (trimmmmed);
}
