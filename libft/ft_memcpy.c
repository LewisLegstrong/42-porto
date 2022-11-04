


void ft_memcpy(void *dest, const void *src, size_t n)
{
	void *aux1;
	void *aux2;

	aux1 = dest;
	aux2 = src;

	while(aux < src + n)
	{
		*aux1 = *aux2;
		aux1++;
		aux2++;
	}
	return (*dest);
}