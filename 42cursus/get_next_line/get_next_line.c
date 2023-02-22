#include "get_next_line.h"

char	*get_buffer(int fd, char* strpool)
{
	char 	*buffer;

	buffer = malloc(sizeof(char *) * BUFFER_SIZE + 1);
	read(fd, buffer, BUFFER_SIZE);
	strpool = ft_strjoin(strpool, buffer);
	free(buffer);
	return (strpool);
}

char *get_next_line(int fd)
{
	static char *strpool; //The one that'l store the reading line
	char *linetoget;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	while (!(find_chr(strpool)) || !strpool)
		strpool = get_buffer(fd, strpool);
	
	/*
	Agora que tem \n, colocar numa variavel que va ser devolvida 
	remover o conteudo ate ao \n da pool de buffers
	
	
	*/	
	return (linetoget);
}

char	*poolcut(char *strpool, char *linetoget)
{
	

	ft_strlen(strpool);
	ft_strlen(linetoget);

	//
} 

char	*linetoget()
{

}

//

// int main()
// {
// 	int fd;
// 	char *coiso; 

// 	fd = open("teste.txt", O_RDWR);
// 	if (fd < 0)
// 		printf("Error");
// 	else
// 	{
// 		coiso = get_next_line(fd);
// 		printf("%s", coiso);
// 	}
// 	return 0;
// }