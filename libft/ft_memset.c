

#include <unistd.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	void *aux;
	aux = s;
	while(aux < s+n){
		*aux = c;
		aux++;
	}

	return(*s);
}

//to be verified