#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *buffer;
	static char *linetoget; //The one that'l store the reading line

	buffer = malloc(sizeof(char *) * (BUFFER_SIZE + 1)); 
	read(fd, buffer, BUFFER_SIZE);
	linetoget = ft_strjoin(buffer, linetoget);

	return (linetoget);
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
	}
	return 0;
}