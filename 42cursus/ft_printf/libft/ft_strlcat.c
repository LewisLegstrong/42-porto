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

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen((char *)src));
	if (size <= ft_strlen(dest))
		return (size + ft_strlen((char *)src));
	i = (ft_strlen(dest));
	j = 0;
	while (src[j] != '\0' && (j < (size - i) - 1))
	{	
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen((char *)src));
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
