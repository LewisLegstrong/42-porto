/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:20:47 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/27 10:20:49 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	char			*aux;
	unsigned int	i;

	i = 0;
	aux = src;
	while (*aux != '\0')
	{
		aux++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char				*aux;
	unsigned int		j;

	j = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	aux = dest + (ft_strlen(dest));
	while (*src != '\0' && j < (size - (ft_strlen(dest)) - 1))
	{	
		*aux = *src;
		aux++;
		src++;
		j++;
	}
	*aux = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}

/*int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = " 42! Tudo Bem ?";
	int	rest;

	printf("%s \n", dest);
	rest = ft_strlcat(dest, src, 15);
	printf("%s %d \n", dest, rest);

	char	dest2[] = "Hello";
	char	src2[] = " 42! Tudo Bem ?";
	
	printf("%s \n", dest2);
	rest = strlcat(dest2, src2, 15);
	printf("%s %d \n", dest2, rest);
	return (0);
}*/
