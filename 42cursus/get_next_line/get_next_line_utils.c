#include "get_next_line.h"

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

char	*ft_strjoin(char *strpool, char *buffer)
{
	char	*joined;
	char	*aux;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen((char *)strpool);
	len2 = ft_strlen((char *)buffer);
	joined = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	aux = joined;
	ft_memcpy(aux, strpool, len1);
	aux = aux + len1;
	ft_memcpy(aux, buffer, len2);
	aux = aux + len2;
	*aux = 0;
	free(strpool);
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