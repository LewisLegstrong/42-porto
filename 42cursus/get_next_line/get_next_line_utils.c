#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*aux;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	joined = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	aux = joined;
	ft_memcpy(aux, s1, len1);
	aux = aux + len1;
	ft_memcpy(aux, s2, len2);
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

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*aux;

	aux = s;
	while (aux < (unsigned char *)s + n)
	{
		*aux = c;
		aux++;
	}
	return (s);
}