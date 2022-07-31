/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:54:51 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/26 13:54:54 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*unsigned int ft_strlen(char *str)
{
	char *aux;
	unsigned int i;

	i = 0;
	aux = str;
	while (*aux != '\0')
	{
		i++;
	}
	return (i); 
}*/{
	char				*aux;
	char				*aux2;
	unsigned int		i;

	i = 0;
	aux = dest;
	aux2 = src;
	while (*aux != '\0')
		aux++;
	while (*aux2 != '\0' && i < nb)
	{
		*aux = *aux2;
		aux++;
		aux2++;
		i++;
	}
	*aux = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*aux;
	char				*aux2;
	unsigned int		i;

	i = 0;
	aux = dest;
	aux2 = src;
	while (*aux != '\0')
		aux++;
	while (*aux2 != '\0' && i < nb)
	{
		*aux = *aux2;
		aux++;
		aux2++;
		i++;
	}
	*aux = '\0';
	return (dest);
}

/*
int	main(void)
{
	char 			frase1[] = "Hello";
	char 			frase2[] = "Ola";
	unsigned int	n;

	n = 2;
	printf("%s - - %s\n", frase1, frase2);
	strncat(frase1, frase2, n);
	printf("%s - - %s\n", frase1, frase2);
	ft_strncat(frase1, frase2, n);
	printf("%s - - %s\n", frase1, frase2);
	return (0);
}
*/
