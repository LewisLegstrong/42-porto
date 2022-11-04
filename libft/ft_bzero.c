

#include <unistd.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	void *aux;
	aux = s;
	while(aux < s+n){
		*aux = '\0';
		aux++;
	}
}

//to be verified