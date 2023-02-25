/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:42:33 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/25 11:42:44 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	cont;

	cont = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}

char	*ft_strjoin(char *pool, char *buff)
{
	char	*joined;
	char	*aux;
	size_t	len1;
	size_t	len2;

	if (!pool)
		return (NULL);
	len1 = ft_strlen(pool);
	len2 = ft_strlen(buff);
	joined = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	aux = joined;
	if (len1 != 0)
	{
		ft_memcpy(aux, pool, len1);
		aux = aux + len1;
	}
	ft_memcpy(aux, buff, len2);
	aux = aux + len2;
	*aux = 0;
	return (joined);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*aux1;
	const unsigned char	*aux2;

	aux1 = dest;
	aux2 = src;
	if (src == dest)
		return (dest);
	while (n-- != 0)
	{
		*aux1 = *aux2;
		aux1++;
		aux2++;
	}
	return (dest);
}

int	find_chr(const char *s)
{
	char	*tmp;

	tmp = (char *)s;
	if (s == NULL)
		return (0);
	while (*tmp)
	{
		if (*tmp == '\n')
			return (1);
		tmp++;
	}
	return (0);
}

char	*initpool(char *pool)
{
	if (!pool)
	{
		pool = malloc(sizeof(char) * 1);
		*pool = '\0';
	}
	return (pool);
}
