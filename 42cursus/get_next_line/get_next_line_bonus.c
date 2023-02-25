/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:32:22 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/25 11:45:47 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_buffer(int fd, char *pool)
{
	char	*buffer;
	char	*tmp;
	int		size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (1)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
		{
			free(buffer);
			free(pool);
			return (NULL);
		}
		buffer[size] = '\0';
		tmp = ft_strjoin(pool, buffer);
		free(pool);
		pool = tmp;
		if (find_chr(pool) || size == 0)
			break ;
	}
	free(buffer);
	return (pool);
}

char	*get_next_line(int fd)
{
	static char	*strpool[4096];
	char		*linetoget;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 4096)
		return (NULL);
	strpool[fd] = initpool(strpool[fd]);
	if (!(find_chr(strpool[fd])))
		strpool[fd] = get_buffer(fd, strpool[fd]);
	if (!strpool[fd])
		return (NULL);
	linetoget = return_line(strpool[fd]);
	strpool[fd] = poolcut(strpool[fd]);
	return (linetoget);
}

int	size_newpool(char *strpool)
{
	int	size;

	size = 0;
	while (*strpool != '\n' && *strpool)
		strpool++;
	if (*strpool == '\n')
		strpool++;
	while (*strpool++)
		size++;
	return (size);
}

char	*poolcut(char *strpool)
{
	char	*newpool;
	int		i;
	int		size;

	if (!*strpool)
	{
		free(strpool);
		return (NULL);
	}
	size = ft_strlen(strpool) - size_newpool(strpool);
	newpool = malloc(sizeof(char) * (size_newpool(strpool) + 1));
	if (!newpool)
		return (NULL);
	i = 0;
	while (strpool[size])
		newpool[i++] = strpool[size++];
	newpool[i] = '\0';
	free(strpool);
	if (newpool[0] == '\0')
	{
		free(newpool);
		return (NULL);
	}
	return (newpool);
}

char	*return_line(char *strpool)
{
	int		i;
	char	*ret_str;
	char	*it;

	i = 0;
	if (!*strpool)
		return (NULL);
	while (strpool[i] != '\n' && strpool[i])
		i++;
	if (strpool[i] == '\n')
		i += 1;
	ret_str = malloc(sizeof(char) * (i + 1));
	if (!ret_str)
		return (NULL);
	it = ret_str;
	while (*strpool && *strpool != '\n')
		*it++ = *strpool++;
	if (*strpool == '\n')
		*it++ = *strpool;
	*it = '\0';
	return (ret_str);
}
