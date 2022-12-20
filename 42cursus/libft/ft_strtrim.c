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
	char *aux;

	aux = (char *)set_str;
	while (aux != '\0')
	{	
		if (c == *aux)
			return (1);
		aux++;
	}
	return (0);
}

static void 	str_cpy(const char *s1, const char *trim, int start, int stop)
{
	int z;

	z = 0;
	while (start <= stop)
	{
		trim[z] = s1[start];
		z++;
		start++;
	}
	trim[stop] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*trimmmmed;
	int		len;
	int		i;
	int		j;

	len = ft_strlen((char *)s1);
	j = len;
	while(s1 != '\0')
	{
		if (is_set(s1[i], set))
			i++;
		else if (is_set(s1[j], set))
			j--;
		else	
			break;
	}
	trimmmmed = malloc (sizeof (char) * (j - i + 1));
	if (!trimmmmed)
		return (NULL);
	str_cpy(s1, trimmmmed, i, j+1);
	return (trimmmmed);
}
