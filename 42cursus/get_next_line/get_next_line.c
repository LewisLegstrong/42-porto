#include "get_next_line.h"

char	*get_buffer(int fd, char* strpool)
{
	char 	*buffer;
	int		size;

	buffer = malloc(sizeof(char *) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!(find_chr(strpool)) || size == 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		buffer[size] = '\0';
		strpool = ft_strjoin(strpool, buffer);
	}
	free(buffer);
	return (strpool);
}

char *get_next_line(int fd)
{
	static char *strpool; //The one that'l store the reading line
	char *linetoget;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!(find_chr(strpool)))
		strpool = get_buffer(fd, strpool);
	linetoget = return_line(strpool);
	strpool = poolcut(strpool, linetoget);
	
	//test
	printf(" \n%s\n", strpool);
	
	
	return (linetoget);
}

int	size_newpool(char *strpool)
{
	int	size;

	size = 0;
	while (*strpool != '\n')
		strpool++;
	if (*strpool == '\n')
		strpool++;	
	while(*strpool++)
		size++;
	return (size);
}

char	*poolcut(char *strpool, char *linetoget)
{
	char *newpool;
	char *aux;
	char *aux2;

	aux = strpool;
	newpool = malloc(sizeof(char *) * (size_newpool(strpool) + 1));
	if (!newpool)
		return (NULL);
	aux2 = newpool;
	while (*strpool != '\n')
		strpool++;
	strpool++;
	while (*strpool)
		*newpool++ = *strpool++;
	*newpool = '\0';
	strpool = aux;
	free(strpool);
	newpool = aux2;
	if(*newpool == '\0')
	{
		free(newpool);
		return (NULL);
	}
	return (newpool);
} 

char	*return_line(char *strpool)
{
	int		size;
	char	*aux;	
	char	*aux2;
	char	*ret_str;

	size = 0;
	aux = strpool;
	while (*aux++ != '\n')
		size++;
	ret_str = malloc(sizeof(char *) * size + 2);
	if (!ret_str)
		return (NULL);
	aux2 = ret_str;
	aux = strpool;
	while (*aux != '\n' && !(*aux))
		*ret_str++ = *aux++;
	if (*aux == '\n')
		*ret_str++ = *aux++;
	*ret_str = '\0';
	return (aux2);
}



int main()
{
	int fd;
	char *coiso; 

	fd = open("teste.txt", O_RDWR);
	if (fd < 0)
		printf("Error");
	else
	{
		coiso = get_next_line(fd);
		printf("%s", coiso);
		coiso = get_next_line(fd);
		printf("%s", coiso);
	
	}
	free (coiso);
	return 0;
}