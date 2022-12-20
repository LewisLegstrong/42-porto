/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:29:11 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:29:13 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cnt_wd(char *s, char c)
{
	size_t	nwd;

	nwd = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			nwd++;
			while (*s != c && *s)
				s++;
		}
	}
	return (nwd);
}

static size_t	slen(char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*split_word(char *s, size_t stlen)
{
	char	*newword;
	size_t	j;

	j = 0;
	newword = malloc(sizeof(char) * stlen + 1);
	if (!newword)
		return (NULL);
	while (j < stlen)
	{
		*newword++ = *s++;
		j++;
	}
	*newword = '\0';
	return (newword);
}

char	**ft_split(char const *s, char c)
{
	char	**map;
	size_t	nwd;
	size_t	i;

	i = 0;
	nwd = cnt_wd((char *)s, c);
	map = malloc(sizeof(char *) * nwd + 1);
	if (!map)
		return (NULL);
	while (i < nwd)
	{
		while (*s)
		{
			if (*s == c)
				s++;
			else
			{
				map[i++] = split_word((char *)s, slen((char *)s, c));
				s = s + slen((char *)s, c);
			}
		}
	}
	map[i] = NULL;
	return (map);
}

int main()
{
	char *s = ":miguel:more:silva:";
	char **map;
	int i = 0;
	map = ft_split(s, ':');
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	return (0);
}
