/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:41:51 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/23 17:41:51 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*strpool;
	char		*linetoget;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	strpool = initpool(strpool);
	if (!(find_chr(strpool)))
		strpool = get_buffer(fd, strpool);
	if (!strpool)
		return (NULL);
	linetoget = return_line(strpool);
	strpool = poolcut(strpool);
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
	char	*aux;
	char	*aux2;

	if (!*strpool)
	{
		free(strpool);
		return (NULL);
	}
	aux = strpool;
	newpool = malloc(sizeof(char) * (size_newpool(strpool) + 1));
	if (!newpool)
		return (NULL);
	aux2 = newpool;
	while (*strpool != '\n' && *strpool)
		strpool++;
	if (*strpool == '\n')
		strpool++;
	while (*strpool)
		*newpool++ = *strpool++;
	*newpool = '\0';
	strpool = aux;
	free(strpool);
	newpool = aux2;
	if (*newpool == '\0')
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
		return(NULL);
	it = ret_str;
	while (*strpool && *strpool != '\n')
		*it++ = *strpool++;
	if (*strpool == '\n')
		*it++ = *strpool;
	*it = '\0';
	return (ret_str);	
}


/*int main()
{
	int fd;
	char *coiso; 

	fd = open("./teste", O_RDONLY);
	if (fd < 0)
	{
		printf("Error");
		return (1);
	}		
	while (1)
	{	
			coiso = get_next_line(fd);
			printf("%s", coiso);
			free (coiso);
			coiso = get_next_line(fd);
			printf("%s", coiso);
			free (coiso);
			break ;
	}		
	close(fd);
	return 0;
}*/
